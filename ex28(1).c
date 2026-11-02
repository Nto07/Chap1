#include <stdio.h>
#include <stdlib.h>

int main()
{
	int c;
	do
	{	
		printf("Choix d'une table de multiplication (entre 1 et 10) :");
		scanf("%d", &c);	
	}
	while(c > 10);

	for(int i = 0; i <= 10; i++)
	{
		int res = c * i;
		printf("%d ", res);
	}
	printf("\n");
}