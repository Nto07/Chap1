#include <stdio.h>

int main() 
{
	char ch;
	printf("Saisir une lettre :");	
	
	scanf("%c", &ch);
	
	if(ch >= 'a' && ch <= 'z')
	{
		printf("En majuscule : %c\n", ch - 32);
	}
	
	if(ch >= 'A' && ch <= 'Z')
	{
		printf("En minuscule : %c\n", ch + 32);
	}

	if(ch  == '!' || ch == '#' || ch == '.' || ch == '?' || ch == '$' || ch == '*' || ch == '&' || ch == '@')
	{
		printf("Erreur !\n");
	}    

}