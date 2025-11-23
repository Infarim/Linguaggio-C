#include <stdio.h>

void incrementa (int *n)
{
    *n = *n +5;
    printf("n contiene l'indirizzo di x: %p\n", (void*)n);
    printf("invcece l'indirizzo di n e' %p\n", (void*)&n);
}

int main()
{
    int x;
    printf("Inserisci il valore di x: ");
    scanf("%d", &x);
    incrementa(&x);
    printf("%d\n", x);
    printf("L'indirizzo di x all'interno del main e': %p", (void*)&x);
    
}
