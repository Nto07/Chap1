#include <stdio.h>

int main()
{
	int a;
	int b;
	char c;
	int e;
	
	printf("Opération :");
	scanf("%d %c %d", &a, &c, &b);
	
	if(c == '+')
	{
		e = a + b;
		printf("Résultat : %d\n", e);
	}
	
	if(c == '-')
	{
		e = a - b;
		printf("Résultat : %d\n", e);
	}

	if(c == '/')
	{
		e = a / b;
		printf("Résultat : %d\n", e);
	}

	if(c == '*')
	{
		e = a * b;
		printf("Résultat : %d\n", e);
	}
}