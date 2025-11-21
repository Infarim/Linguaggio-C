#include <stdio.h>

int main()
{
	int i;
	int dim=100;
	int a[dim];
	a[0]=1;
	a[1]=2;
	
	for(i=2; i<dim; i++)
	{
		a[i]=a[i-1]+a[i-2];
		
	}
	
	for(i=0; i<dim; i++)
	{
		printf("%d\n", a[i]);
	}
}
