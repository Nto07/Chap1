#include <stdio.h>

int main() 
{

	char ch;
	do
	{
		printf("Entrer un caractere : ");
		scanf("%c", &ch);
		getchar();
	}
	while(ch  == '!' || ch == '#' || ch == '.' || ch == '?' || ch == '$' || ch == '*' || ch == '&' || ch == '@');
	
	printf("%c\n", ch);

	// if(ch >= 'a' && ch <= 'z')
	// {
	// 	printf("En majuscule : %c\n", ch - 32);
	// }
	
	// if(ch >= 'A' && ch <= 'Z')
	// {
	// 	printf("En minuscule : %c\n", ch + 32);
	// }  

}