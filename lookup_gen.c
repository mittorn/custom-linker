int my_strcmp(const char *l, const char *r)
{
        for (; *l==*r && *l; l++, r++);
        return *(unsigned char *)l - *(unsigned char *)r;
}

void stub()
{}
void *lookup_libc(const char *name) {
extern char fputs;if(!my_strcmp(name,"fputs"))return fputs;
extern char fmod;if(!my_strcmp(name,"fmod"))return fmod;
extern char __errno_location;if(!my_strcmp(name,"__errno_location"))return __errno_location;
extern char sprintf;if(!my_strcmp(name,"sprintf"))return sprintf;
extern char isprint;if(!my_strcmp(name,"isprint"))return isprint;
extern char mkdir;if(!my_strcmp(name,"mkdir"))return mkdir;
extern char isalpha;if(!my_strcmp(name,"isalpha"))return isalpha;
extern char strerror;if(!my_strcmp(name,"strerror"))return strerror;
extern char __cxa_atexit;if(!my_strcmp(name,"__cxa_atexit"))return stub;
extern char sqrtf;if(!my_strcmp(name,"sqrtf"))return sqrtf;
extern char ;if(!my_strcmp(name,""))return ;
extern char ;if(!my_strcmp(name,""))return ;
extern char _ZdlPv;if(!my_strcmp(name,"_ZdlPv"))return _ZdlPv;
extern char isspace;if(!my_strcmp(name,"isspace"))return isspace;
extern char vsprintf;if(!my_strcmp(name,"vsprintf"))return vsprintf;
extern char localtime;if(!my_strcmp(name,"localtime"))return localtime;
extern char strtod;if(!my_strcmp(name,"strtod"))return strtod;
extern char strchr;if(!my_strcmp(name,"strchr"))return strchr;
extern char vsnprintf;if(!my_strcmp(name,"vsnprintf"))return vsnprintf;
extern char calloc;if(!my_strcmp(name,"calloc"))return calloc;
extern char strncpy;if(!my_strcmp(name,"strncpy"))return strncpy;
extern char pow;if(!my_strcmp(name,"pow"))return pow;
extern char dlclose;if(!my_strcmp(name,"dlclose"))return dlclose;
extern char toupper;if(!my_strcmp(name,"toupper"))return toupper;
extern char memset;if(!my_strcmp(name,"memset"))return memset;
extern char sincosf;if(!my_strcmp(name,"sincosf"))return sincosf;
extern char execl;if(!my_strcmp(name,"execl"))return execl;
extern char strtol;if(!my_strcmp(name,"strtol"))return strtol;
extern char __ctype_toupper_loc;if(!my_strcmp(name,"__ctype_toupper_loc"))return __ctype_toupper_loc;
extern char free;if(!my_strcmp(name,"free"))return free;
extern char dlsym;if(!my_strcmp(name,"dlsym"))return dlsym;
extern char sqrt;if(!my_strcmp(name,"sqrt"))return sqrt;
extern char __ctype_b_loc;if(!my_strcmp(name,"__ctype_b_loc"))return __ctype_b_loc;
extern char fclose;if(!my_strcmp(name,"fclose"))return fclose;
extern char _ZTVN10__cxxabiv117__class_type_infoE;if(!my_strcmp(name,"_ZTVN10__cxxabiv117__class_type_infoE"))return _ZTVN10__cxxabiv117__class_type_infoE;
extern char acos;if(!my_strcmp(name,"acos"))return acos;
extern char strlen;if(!my_strcmp(name,"strlen"))return strlen;
extern char fopen;if(!my_strcmp(name,"fopen"))return fopen;
extern char strcpy;if(!my_strcmp(name,"strcpy"))return strcpy;
extern char dlopen;if(!my_strcmp(name,"dlopen"))return dlopen;
extern char printf;if(!my_strcmp(name,"printf"))return printf;
extern char __cxa_pure_virtual;if(!my_strcmp(name,"__cxa_pure_virtual"))return __cxa_pure_virtual;
extern char strcasecmp;if(!my_strcmp(name,"strcasecmp"))return strcasecmp;
extern char _Znwj;if(!my_strcmp(name,"_Znwj"))return _Znwj;
extern char fwrite;if(!my_strcmp(name,"fwrite"))return fwrite;
extern char _Znaj;if(!my_strcmp(name,"_Znaj"))return _Znaj;
extern char isalnum;if(!my_strcmp(name,"isalnum"))return isalnum;
extern char fprintf;if(!my_strcmp(name,"fprintf"))return fprintf;
extern char strstr;if(!my_strcmp(name,"strstr"))return strstr;
extern char time;if(!my_strcmp(name,"time"))return time;
extern char strncat;if(!my_strcmp(name,"strncat"))return strncat;
extern char _ZTVN10__cxxabiv120__si_class_type_infoE;if(!my_strcmp(name,"_ZTVN10__cxxabiv120__si_class_type_infoE"))return _ZTVN10__cxxabiv120__si_class_type_infoE;
extern char atan2;if(!my_strcmp(name,"atan2"))return atan2;
extern char dlerror;if(!my_strcmp(name,"dlerror"))return dlerror;
extern char strncasecmp;if(!my_strcmp(name,"strncasecmp"))return strncasecmp;
extern char strcat;if(!my_strcmp(name,"strcat"))return strcat;
extern char getcwd;if(!my_strcmp(name,"getcwd"))return getcwd;
extern char puts;if(!my_strcmp(name,"puts"))return puts;
extern char fork;if(!my_strcmp(name,"fork"))return fork;
extern char sscanf;if(!my_strcmp(name,"sscanf"))return sscanf;
extern char fscanf;if(!my_strcmp(name,"fscanf"))return fscanf;
extern char strncmp;if(!my_strcmp(name,"strncmp"))return strncmp;
extern char snprintf;if(!my_strcmp(name,"snprintf"))return snprintf;
extern char strcmp;if(!my_strcmp(name,"strcmp"))return strcmp;
extern char __cxa_finalize;if(!my_strcmp(name,"__cxa_finalize"))return __cxa_finalize;
return 0;
}

