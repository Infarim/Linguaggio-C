#include <stdio.h>

int main ()
{
	int n;
	
	printf("Inserisci la quantita' di valori che vuoi usare: ");
	scanf("%d", &n);
	
	int array[n];
	int i;
	int somma=0;
	
	
	
	for(i=0; i<n; i++)
	{
		printf("Inserisci il %d numero: ", i);
		scanf("%d", &array[i]);
	
	}
	for(i=0; i<n; i= i + 2)
	{
		somma += array[i]; 
	}
	printf("\nLa somma dei numeri in posizione pari e'= %d\n", somma);
}

