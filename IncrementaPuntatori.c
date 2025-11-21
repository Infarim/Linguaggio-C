#include <stdio.h>

void incrementa (int *n)
{
    *n = *n +1;
    printf("n contiene l'indirizzo di x: %p\n", (void*)n);
}

int main()
{
    int x=5;
    incrementa(&x);
    printf("%d\n", x);
}