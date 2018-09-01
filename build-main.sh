gcc *.c -I . -m32 -DANDROID_X86_LINKER -lrt -g -lm -lstdc++ -static -pthread -w -o custom-linker -DCUSTOM_LINKER_MAIN
