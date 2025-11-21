#include <stdio.h>

int main ()
{
	int n;
	
	printf("Inserisci la quantita' di  valori che vuoi usare: ");
	scanf("%d", &n);
	
	int array[n];
	int i;
	
	
	
	for(i=0; i<n; i++)
	{
		printf("Inserisci il %d numero: ", i);
		scanf("%d", &array[i]);
	
	}
	for(i=n-1; i>-1; i--)
	{
		
		printf("\n%d\n", array[i]);
	}
}
