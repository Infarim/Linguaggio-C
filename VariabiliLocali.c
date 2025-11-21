#include <stdio.h>

int incrementa (int n)
{
    n = n+1;
    printf("il nuovo valore e':  %d\n", n);
    return 0;
}    

int main ()
{
    int k = 0;
    printf("inserisci il valore di K: ");
    scanf("%d", &k);
    k = incrementa(k);
    printf("il valore di a e': %d", k);
}