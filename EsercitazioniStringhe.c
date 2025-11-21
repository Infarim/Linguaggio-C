#include<stdio.h>
#include<string.h>
#define DIM 20

void leggiStringa (char str[], int dim) {
    fgets(str, dim, stdin);
    if (str[strlen(str)-1]=='\n')
        str[strlen(str)-1]='\0';
    else
        while (getchar()!='\n');
}

int main()
{
    int scelta; 
        
    char username[DIM];
    char password[DIM];
  
    printf("username : ");
    leggiStringa(username, DIM);
    
    printf("password : ");
    leggiStringa(password, DIM);

    
    do
	{
		printf("-----Menu----- \n 1)Verifica Credenziali\n 2)Frase del giorno\n 0)Esci\n");
		scanf("%d", &scelta);		
			
			switch(scelta)
			{
				case 0:
					
				break;
				
				case 1:
					
                    printf("\n--- Credenziali Inserite ---\n");
					printf("Username: %s\n", username);
					printf("Password: %s\n", password);
					printf("Lunghezza username: %lu\n\n", strlen(username));
				
                    
				break;
				
				case 2:
					printf("Il modo migliore per predire il futuro è crearlo \n");
					
				break;
				
				
				default: 
						printf("scelta non valida\n\n");
				break;
		    }
		
	}	while(scelta!=0);
    
    
    
    
    
    return 0;
}
