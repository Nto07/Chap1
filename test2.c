#include <stdio.h>

int main()
{
	char ch = getchar();
	int in = ch;
	char hexa[10];
	sprintf(hexa, "%X", in);
	printf("Caractère saisie : %c, code ASCII decimal = %d, hexa = %s\n", ch, in, hexa);

	
	

}