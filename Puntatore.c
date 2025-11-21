#include <stdio.h>

int main()
{
    int x=100;
    int *p = &x;
    printf("%p\n",(void*)&x);
}