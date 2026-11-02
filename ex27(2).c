#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	 int coups; 
	 int proposition;

	int c;
	
	srand(time(NULL));

	c = rand() % 15;
	printf("%d", c);
	while (proposition != c)
 	{
	 	printf("Faites une proposition\n");
		scanf("%d", &proposition);
		coups++;
 	}
 
	printf("Gagné en %d coups\n", coups);
	
 }