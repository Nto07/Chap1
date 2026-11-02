#include <stdio.h>
#include <stdlib.h>

int main()
{
	int c = 1;
	
	for(int j = 0; j <= 9; j++)
	{
	for(int i = 1; i <= 10; i++)
	{
		int res = c * i;
		printf("%d ", res);	
				
	}
	printf("\n");	
	c++;
	}
	
	printf("\n");
}