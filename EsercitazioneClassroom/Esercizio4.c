#include <stdio.h>

int main ()
{
	int n;
	printf("Inserisci la quantita' di valori che vuoi usare: ");
	scanf("%d", &n);
	
	int array[n];
	int i;
	int pari = 0;
	int dispari = 0;
	
	
	for(i=0; i<n; i++)
	{
		printf("Inserisci il %d numero: ", i);
		scanf("%d", &array[i]);
		
		if(array[i] % 2 == 0)
		{
			pari = pari + 1;
		}else
		{
		
			dispari = dispari + 1;	
		}
	}
	printf("\nI numeri pari sono: %d", pari);
	printf("\nI numeri dispari sono: %d", dispari);
}

