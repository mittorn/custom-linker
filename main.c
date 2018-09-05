#include "linker.h"

void *lookup_libc( const char *, const char *);
#ifdef CUSTOM_LINKER_MAIN
int g_argc;
char **g_argv;
char **g_envp;


// glibc runs main this way
// how about other libcs?
int my__libc_start_main (int (*main) (int, char **, char **), int argc, char * *ubp_av,void (*init) (void), void (*fini) (void), void (*rtld_fini) (void),void * stack_end)
{
	main(g_argc,g_argv,g_envp);
}


int main(int argc, const char **argv, const char ** envp)
{
//	printf("%x\n", lookup_libc("fmod"));
	if(argc < 2)
	{
	    printf("usage: linker <binary> <args>\n");
	    return 0;
	}
	android_linker_init(9,lookup_libc);
	soinfo *lib = find_library(argv[1]);
	if( !lib )
	{
	    printf("Failed to load %s: %s\n", argv[1], android_dlerror());
	    return 1;
	}
	call_constructors_recursive(lib);
//	Elf_Sym *sym = lookup("main", 0, 0);
	void (*start)(long *) = lib->base + lib->entry;
	g_argc = argc;
	g_envp = envp;
	// stack pointer
	long arr[argc + 1];
	arr[0] = argc;
	for(int i = 1; i < argc; i++)
		arr[i] = argv[i];
	arr[argc] = 0;
	arr[argc+1] = envp;
	g_argv = argv;//&arr + 1;
#ifdef __i386__
	// try setup correct stack pointer with arguments list
	// this should work with any linux libc if it's loaded
	__asm__ __volatile__("mov %0,%%eax\npush %%eax\nmov %%eax,%%esp\njmp %1"::"b"(arr),"r"(start):);
#else
	// cannot call start correclty
	// because it is not C function
	// hope it will not crash until
	// __libc_start_main call
	// works on i386 with my__libc_start_main wrapper
	start(&arr);
#endif
}
#endif
void *dlopen(const char *filename, int flag)
{
    static int initialized = 0;

    if( !initialized )
	android_linker_init(9,lookup_libc);

    return android_dlopen(filename, flag);
}

void *dlsym(void *lib, const char *name)
{
    return android_dlsym(lib, name);
}

int dladdr(void *addr, void *info)
{
    return android_dladdr(addr, info);
}

const char *dlerror()
{
    return android_dlerror();
}

void dlclose(void *lib)
{
    android_dlclose(lib);
}