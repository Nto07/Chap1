#include <stdio.h>
#include <stdlib.h>

int main()
{
	 int reponse = 12;
	 int coups; 
	 int proposition;
	 
	while (proposition != reponse)
 	{
	 	printf("Faites une proposition\n");
		scanf("%d", &proposition);
		coups++;
 	}
 
	printf("Gagné en %d coups\n", coups);
	
 }