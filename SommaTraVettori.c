#include <stdio.h>

int main ()
{
	int v1[10];
	int v2[10];
	int v3[10];
	int i;
	
	printf("\n-----VETTORE 1-----");
	printf("\nInserisci 10 valori per il primo vettore\n\n");

for(i=0; i<10; i++)
		
	{
		
		printf("Inserici il valore %d per v1[%d]: ", i+1, i+1);
		scanf("%d", &v1[i]);
	}
		
		printf("\n-----VETTORE 2-----");
		printf("\nInserisci 10 valori per il secondo vettore\n\n");
	
for(i=0; i<10; i++)
		
	{
		printf("Inserici il valore %d per v2[%d]: ", i+1, i+1);
		scanf("%d", &v2[i]);
	}		
		
	printf("\n-----VETTORE 3-----");
	printf("\nEffettuo la somma tra i vettori\n\n");

for(i=0; i<10; i++)
	{
		v3[i] = v1[i] + v2[i];
		printf("Il valore del terzo vettore del %d indice e' uguale a: %d \n", i, v3[i]);
	}
	
}
