#include <stdio.h>

int main ()
{
    char  giorno,l,m,g,v,s,d;

    printf("Inserisci l'iniziale di un giorno della settimana: \n");
    scanf("%c", &giorno);
    switch(giorno)
    {
        case 'l':
            printf("Oggi e' lunedi");
        break;

        case 'm':
            printf("Oggi e' martedi");
        break;

        case 'g':
            printf("Oggi e' giovedi");
        break;

        case 'v':
            printf("Oggi e' venerdi");
        break;

        case 's':
            printf("Oggi e' sabato");
        break;

        case 'd':
            printf:("Oggi e' domenica");
        break;

        default:
            printf("il carattere selezionato non appartiene ad un giorno della settimana");
        break;
    }

}
