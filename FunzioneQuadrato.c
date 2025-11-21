#include <stdio.h>

int quadrato (int n)
{
    n = n * n;
    printf("il nuovo valore e' %d\n", n);
}

int main()
{
    int k = 0;
    printf("Inserisci il valore di k: ");
    scanf("%d", &k);
    quadrato(k);
}