## Custom bionic-based linker

### What works

 * Loading some dynamic libraries from static binary linked with same libc
 * Loading some dynamic binaries and hook it to host libc
 * Hooking exported symbols
 * Generating stubs for undefined symbols
 * Ignoring missing libraries
 * Ignoring library versions

### What does not work

 * Loading glibc itself (use linked libc instead)
 * Loading static binaries (is it possible?)
 * Complex multi-thread libraries and applications

### Useful scripts

 * Use `./gen.sh [/path/to/lib1] [path/to/lib2]` to generate wrappers to host libraries. syms.txt will contain accumulated symbols list

 * Use build.sh to build libdl-compatible loader

 * Use build-main.sh to build linker-like loader

### Enviroment variables

 * HYBRIS_LINKER_DEBUG=N

 * CUSTOM_LD_PRELOAD

 * CUSTOM_LD_LIBRARY_PATH

 * Other libhybris envs