#include <stdio.h>

int main ()

{
	int N;
	int somma = 0;
	printf("Inserisci un numero, verranno sommati tra loro tutti numeri pari che lo precedono: ");
	scanf("%d", &N);
	
	int i=0;
	while(i <=  N)
	{
		if (i%2==0)
		{	
			printf("%d\n",i);
			somma += i;
		}
	
	
	i++;	
	}
	printf("La somma e'' uguale a: %d", somma);
}

