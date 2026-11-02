#include <stdio.h>

int main()
{
	int num;
	
	do
	{
		printf("Saisir un entier (max 11) :\n");
		scanf("%d", &num);
	}

	while(num > 11 && num > 0);
	
	for(int i = 0; i <= num; i++)
		{
			printf("%d ", num-i);
		}

	printf("\n");

}