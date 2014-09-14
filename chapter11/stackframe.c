#include <stdio.h>

int test(int i, char* str)
{
    printf("hello %s, %i", str, i);
    return 0;
}

void main()
{
    int i = 0;
    int j = 1;
    int k = 2;
    char str[] = "AAAA";
    char strtest[] = "BBBB";
    test(i, str);
}
