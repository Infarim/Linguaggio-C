#include <stdio.h>

int calcolaEta (int annoNascita, int annoAttuale)
{
   if(annoNascita>annoAttuale)
   {
    return annoNascita-annoAttuale;
   }else{
    return annoAttuale-annoNascita;
   }
}
   
     

int main()
{
    int oggi,
        anno;
    printf("---Calcolo dell'eta'---\n");
	printf("Inserisci il primo valore (anno di nascita o anno attuale):\n");
    scanf("%d", &oggi);
    printf("Inserisci il secondo valore\n");
    scanf("%d", &anno);
    int eta = calcolaEta(anno, oggi);
    printf("Ottimo, hai %d anni!", eta);
    
}
