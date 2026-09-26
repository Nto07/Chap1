#include <stdio.h>

int main()
{
	char ch = getchar();
	int in = ch;
	char hexa[10];
	sprintf(hexa, "%X", in);
	printf("Caractere saisie : %c, code ASCII decimal = %d, hexa = %x\n", ch, in, hexa);
}