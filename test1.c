#include <stdio.h>

int main() 
{

	char ch = getchar();

	bool isTrue = false;

	if(ch >= 'a' && ch <= 'z')
	{
		printf("Minuscule\n");
		
	}	

	else if (ch >= 'A' && ch <= 'Z')
	{
		printf("Majuscule\n");
	}	

	else if (ch == '.' || ch == ',' || ch == '!' || ch == '?')
	{

		printf("Ponctuation\n");
		isTrue = true;
	}

	else if (ch >= '0' && ch <= '9')
	{
		printf("Chiffre/Nombre\n");
		isTrue = true;
	}

	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'Y' && ch <= 'a' && ch >= 'z' && ch <= 'A' && ch >= 'Z')
	{
		printf("Voyelle\n");
		isTrue = true;	
	}

	else if (!isTrue)
	{
		printf("Consonne\n");
	}




}