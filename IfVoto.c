#include  <stdio.h>

int main()
{
	int voto;
	
	printf("inserisci il voto: ");
	scanf("%d", &voto);
	while(voto<0 || voto>10)
	{
		printf("valore non valido, reinserisci voto tra 0 e 10 : ");
		scanf("%d", &voto);
	}
	
		{
	
			if(voto >=6)
	
			{
				printf("lo studente e' promosso");
			}
				else
				{
				printf("lo studente e' bocciato");
				}
	


		}
} 
