#include <stdio.h>

int main()
{
	
	int n;
	
	printf("Inserisci la quantita' di valori che vuoi usare: ");
	scanf("%d", &n);
	
	int array[n];
	int i;
	int max;
	int min;
	
	for(i=0; i<n; i++)
	{
		printf("Inserisci il %d numero: ", i);
		scanf("%d", &array[i]);
		
		if(i == 0)
		{
			max = array[i];
			min = array[i];
		}else if(array[i]>max)
		{
			max = array[i];
		}else if(array[i]<min)
		{
			min = array[i];
		}	
	}
	
	printf("\nIl valore massimo e': %d", max);	
	printf("\nIl valore minimo e': %d", min);
}
