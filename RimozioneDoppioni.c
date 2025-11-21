#include <stdio.h>
#define DIM 6

int main()
{
    int isPresent = 0;
    int i, j, k=0;
    int a[] = {1,2,2,4,5,5};
    int b[] = {0,0,0,0,0,0};
    
     printf("--- Valori vettore con duplicati ---\n");
  	for(i=0; i<DIM; i++)
	{
    printf("a[%d] = %d\n",i, a[i]);
  	}

	printf("--- Valori vettore senza duplicati ---\n");
	for(i=0; i<DIM; i++)
    {
        isPresent = 0;
        for(j=0; j<DIM; j++)
        {
            if(a[i]==b[j])
            {
                isPresent = 1; 
                break;
            }
        }
        if(!isPresent)
        {
            b[k]=a[i];
            k++;
        }
    }
    
    
    for(i=0; i<DIM; i++)
    {
        printf("a[%d] = %d\n",i, b[i]);
    }
    
}
