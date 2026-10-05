#include <stdio.h>
#include <stdlib.h>

int main()
{
	int rep = 12;
	int c;
	int p;

	do
	{
		printf("Faites une proposition :");
		scanf("%d", &p);
		c++;
	}
	while(p != rep);

	printf("Gagné en %d coups\n", c);
}