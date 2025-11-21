#include <stdio.h>
#define DIM 8
int main ()
{
	
	int array[DIM] = {2, 78, 23, 44, 57, 88, 94, 21};
	int i;
	int numero;
	int x = 0;

		printf("Inserisci un numero per vedere se e' presente: ");
		scanf("%d", &numero);
	
	for(i=0; i<DIM; i++)
	{
	
		if(array[i] == numero)
		{
			
			x = 1;
			
		}
	}
	
	if(x == 1)
	{
		printf("\nil numero e' presente nell'elenco");
	
	}else{
	
		
		
		printf("\nil numero non e' presente nell'elenco");	
	}
	
}

