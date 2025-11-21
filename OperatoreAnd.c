#include <stdio.h>

int main()
{
    int voto, condotta;
    
    printf("---Scrutini di fine anno---\n");
    printf("Inserisci il voto finale dell'alunno: \n");
    scanf("%d", &voto);
    printf("Inserisci il voto di condotta dell'alunno: \n");
    scanf("%d", &condotta);

    if(voto>=6 && condotta >6)
    {
        printf("Visti i risultati conseguiti, l'alunno è prommosso all'anno successivo\n");
    }
    else
    {
        printf("Visti i risultati conseguiti, l'alunno è rimandato all'anno successivo\n");
    }

}