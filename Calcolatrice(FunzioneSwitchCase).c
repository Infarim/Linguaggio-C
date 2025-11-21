#include <stdio.h>

int somma (int a, int b)
{
	
	printf("inserisci valore numero 1: \n");
	scanf("%d", &a);
	printf("inserisci valore numero 2: \n");
	scanf("%d", &b);
			
	printf("%d", a+b);	
	
}

int differenza (int a, int b)
{
	
	printf("inserisci valore numero 1: \n");
	scanf("%d", &a);
	printf("inserisci valore numero 2: \n");
	scanf("%d", &b);
				
	printf("%d", a-b);	

}

int moltiplicazione (int a, int b)
{

	printf("inserisci valore numero 1: \n");
	scanf("%d", &a);
	printf("inserisci valore numero 2: \n");
	scanf("%d", &b);
				
	printf("%d", a*b);	

}

int divisione(int a, int b)
{
	
	printf("inserisci valore numero 1: \n");
	scanf("%d", &a);
	printf("inserisci valore numero 2: \n");
	scanf("%d", &b);
				
	printf("%d", a/b);;	

}

int main()
{
	int scelta, a,b;
	
	do
	{
		printf("-----Menu----- \n 1)Somma\n 2)Differenza\n 3)Moltiplicazione\n 4)Divisione\n 0)Esci\n");
		scanf("%d", &scelta);		
			
			switch(scelta)
			{
				case 0:
					
				    break;
				
				case 1:
					somma(a,b);
				break;
				
				case 2:
					differenza(a,b);
				break;
				
				case 3:
					moltiplicazione(a,b);
				break;
				
				case 4:
					divisione(a,b);
				break;
				
				default: 
						printf("scelta non valida\n\n");
				break;
		    }
		
	}	while(scelta!=0);
}

