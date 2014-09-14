#include <stdio.h>

unsigned int get_sp()
{
    __asm__("movl %esp, %eax");
}

void main()
{
    printf("Stack Pointer ESP value is 0x%x\n", get_sp());
}
