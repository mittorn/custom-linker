gcc *.c -c -I . -m32 -DANDROID_X86_LINKER -lrt -g -lm -lstdc++ -static -pthread -w
ar rcs dl.a *.o