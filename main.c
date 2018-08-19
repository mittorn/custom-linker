
void *android_dlopen(const char *filename, int flag);
void *lookup_libc( const char *, const char *);
#if 0
int main(int argc, const char **argv)
{
//	printf("%x\n", lookup_libc("fmod"));
	android_linker_init(9,lookup_libc);
	void *lib = android_dlopen("./hl.so", 0);
	printf("%x\n", android_dlsym(lib, "env_sprite"));
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