#include <stdio.h>
#include <string.h>

void incrementa (int n)
{
    n = n+1;
    printf("il nuovo valore e':  %d", n);
}

int main()
{
    int k;
    printf("Inserisci il valore di k: ");
    scanf("%d", &k);
    incrementa(k);
}