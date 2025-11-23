#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int N;
	printf("Inserisci i valori che vuoi usare: ");
    scanf("%d", &N);

	int array[N];
    int i;
    
	for(i=0; i<N; i++)
    {
        array[i]=rand();
        printf("a[%d] = %d\n", i, array[i]);
    }
}
