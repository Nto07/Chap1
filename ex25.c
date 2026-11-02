#include <stdio.h>

int main()
{
	int num;
	do
	{
		printf("Saisir un entier (max 11) :\n");
		scanf("%d", &num);
		
		for(int i = 0; i <= num; i++)
		{
			printf("%d ", i);
		}
	}

	while(num > 11);
	
	printf("\n");

}