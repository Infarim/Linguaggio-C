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

struct Lavoratori
{
    char nome[30];
    char cognome[30];
    double stipendio;
};

int main ()
{
    int i;
    double somma=0;
    double media=0;
    double stipendio;
    double max;
    double min;
    struct Lavoratori l[5];

    for(i=0; i<5; i++)
    {
        printf("Inserisci il nome della persona %d: ", i+1);
        leggiStringa(l[i].nome, 30);

        printf("Inserisci il cognome della persona %d: ", i+1);
        leggiStringa(l[i].cognome, 30);

        printf("Inserisci lo stipendio della persona %d: ", i+1);
        scanf("%lf", &l[i].stipendio);
        while (getchar()!='\n'); 
        
        printf("\n--- Dati Persona %d ---\n", i+1);
        printf("Nome: %s\n", l[i].nome);
        printf("Cognome: %s\n", l[i].cognome);
        printf("Stipendio: %lf\n", l[i].stipendio);
    
        
    
    }
    
    for(i=0; i<5; i++)
    {
        somma += l[i].stipendio;

    if(i == 0)
		{
			max = l[i].stipendio;
			min = l[i].stipendio;
		}else if(l[i].stipendio>max)
		{
			max = l[i].stipendio;
		}else if(l[i].stipendio<min)
		{
			min = l[i].stipendio;
		}	
	}
	
	    printf("\nLo stipendio massimo e': %lf euro", max);	
	    printf("\nLo stipendio minimo e': %lf euro", min);

    

        media = somma / 5;
        printf("\nLa media degli stipendi e': %lf", media);
    
    return 0;
}