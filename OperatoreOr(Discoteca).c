#include <stdio.h>

struct Persona
{
    int eta;
    char genere;
};

int main()
{
    struct Persona p;
    printf("Benvenuto, inserisci eta' e genere per verificare l'ingresso:\n");
    printf("Quanti anni hai?\n");
    scanf("%d", &p.eta);
    printf("Indicare il proprio genere m/f\n");
    scanf(" %c", &p.genere);
    while (getchar()!='\n'); 
    
    if(p.eta>=18 || p.genere == 'f')
    {
        printf("Accesso consentito");
    }
    else
    {
        printf("Accesso negato");
    }

    return 0;    
}
