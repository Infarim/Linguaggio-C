int main()
{
	int scelta, 
		numero1, 
		numero2, 
		somma, 
		differenza,
		moltiplicazione,
		divisione;
	
	do
	{
		printf("-----Menu----- \n 1)Somma\n 2)Differenza\n 3)Moltiplicazione\n 4)Divisione\n 0)Esci\n");
		scanf("%d", &scelta);		
			
			switch(scelta)
			{
				case 0:
					
				    break;
				
				case 1:
					printf("inserisci valore numero 1: \n");
					scanf("%d", &numero1);
					printf("inserisci valore numero 2: \n");
					scanf("%d", &numero2);
				
					somma = (numero1 + numero2);	
					printf("la somma e'= %d\n\n", somma);
				break;
				
				case 2:
					printf("inserisci valore numero 1: \n");
					scanf("%d", &numero1);
					printf("inserisci valore numero 2: \n");
					scanf("%d", &numero2);
				
					differenza = (numero1 - numero2);	
					printf("la differenza e'= %d\n\n", differenza);
				break;
				
				case 3:
					printf("inserisci valore numero 1: \n");
					scanf("%d", &numero1);
					printf("inserisci valore numero 2: \n");
					scanf("%d", &numero2);
				
					moltiplicazione = (numero1 * numero2);	
					printf("la moltiplicazione e'= %d\n\n", moltiplicazione);
				break;
				
				case 4:
					printf("inserisci valore numero 1: \n");
					scanf("%d", &numero1);
					printf("inserisci valore numero 2: \n");
					scanf("%d", &numero2);
				
					divisione = (numero1 / numero2);	
					printf("la divisione e'= %d\n\n", divisione);
				break;
				default: 
						printf("scelta non valida\n\n");
				break;
		    }
		
	}	while(scelta!=0);
}
