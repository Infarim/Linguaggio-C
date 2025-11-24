#include <stdio.h>

int main()
{
    int a, i, N, conto, somma, massimo, minimo, pari, dispari;
    float media;
    somma=0;
    massimo=0;
    conto=0;
    pari=0;
    dispari=0;
    
    
    printf("Inserisci una sequenza di numeri interi: \n");
    printf("Attenzione! il primo numero non deve essere 0\n");
    printf("inolre la sequenza terminera' con 0\n");

   do
   {
    scanf("%d", &N);
        if(N!=0)
        {
            conto++;
            somma += N;
        }
            if (conto == 1) 
            { 
                massimo = N;
                minimo = N;
            } 
            else 
            {
                if (N > massimo) massimo = N;
                if (N < minimo) minimo = N;
            }

        if(N % 2 == 0) 
        {
            pari++;
        } 
        else 
        {
            dispari++;
        }
    }
    
    while(N!=0);
 
    if (conto == 0) 
    {
        printf("Nessun numero valido inserito.\n");
    } 
    else 
    {
        
        
        media = (float)somma / conto;

        
        printf("Numeri inseriti: %d\n", conto);
        printf("Somma: %d\n", somma);
        printf("Media: %f\n", media);
        printf("Massimo: %d\n", massimo);
        printf("Minimo: %d\n", minimo);
        printf("Numeri pari: %d\n", pari);
        printf("Numeri dispari: %d\n", dispari);
    }

    
}
