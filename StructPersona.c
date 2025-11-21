#include <stdio.h>
#include <string.h>

void leggiStringa (char str[], int dim) 
{
    fgets(str, dim, stdin);
    if (str[strlen(str)-1]=='\n')
        str[strlen(str)-1]='\0';
    else
        while (getchar()!='\n');
}

struct Persona
{
    char nome[30];
    char cognome[30];
    int eta;
};

int main()
{
    int i;
    struct Persona p[2];
    
    for(i=0; i<2; i++)
    {
        printf("Inserisci il nome della persona %d: ", i+1);
        leggiStringa(p[i].nome, 30);

        printf("Inserisci il cognome della persona %d: ", i+1);
        leggiStringa(p[i].cognome, 30);

        printf("Inserisci l'età della persona %d: ", i+1);
        scanf("%d", &p[i].eta);
        while (getchar()!='\n'); 
        
        printf("\n--- Dati Persona %d ---\n", i+1);
        printf("Nome: %s\n", p[i].nome);
        printf("Cognome: %s\n", p[i].cognome);
        printf("Età: %d\n", p[i].eta);

    }
}

