#include <stdio.h>

int main()
{
	
	int n;
	
	printf("Inserisci la quantita' di valori che vuoi usare: ");
	scanf("%d", &n);
	
	int array[n];
	int i;
	int somma=0;
	int media=0;
	
	for(i=0; i<n; i++)
	{
		printf("Inserisci il %d numeri: ", i);
		scanf("%d", &array[i]);
		somma += array[i];
		media = somma / n;
	}
		printf("La media dei numeri selezionati e': %d", media);
}
