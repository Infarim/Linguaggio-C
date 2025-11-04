#include <stdio.h>

int main()
{
	
	int n;
	
	printf("Inserisci la quntita di valori che vuoi usare: ");
	scanf("%d", &n);
	
	int array[n];
	int i;
	int somma=0;
	
	
	for(i=0; i<n; i++)
	{
		printf("Inserisci il %d numero: ", i);
		scanf("%d", &array[i]);
		somma += array[i];
	}
		printf("La somma dei numeri selezionati e': %d", somma);
}
