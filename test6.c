#include <stdio.h>

int main()
{	
	int a;
	
	
	printf("Saisir un entier : ");
	scanf("%d", &a);
	printf("votre entier est : %d\n", a);


	int b;
	printf("Saisir un entier : ");
	scanf("%d", &b);
	int c = b * b;
	printf("Votre entier est : %d, votre entier au carré est : %d\n", b, c);
}