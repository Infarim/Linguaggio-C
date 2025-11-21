#include <stdio.h>

void somma (int *a, int *b, int *risultato)
{
    *risultato= *a + *b;
    printf("Risultato contiene l'indirizzo %p\n", (void*)risultato);
    printf("invece, l'indirizzo di somma e' %p\n", (void*)&risultato);
}

int main()
{
    int n1=5;
    int n2=10;
    int risultato;
    somma(&n1, &n2, &risultato);
    printf("%d\n", risultato);
    printf("l'indirizzo di risultato e' %p\n", (void*)&risultato);

}