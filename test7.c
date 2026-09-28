#include <stdio.h>

#Define MAX 20;
#Define MIN -20;	

int main()
{
	int num;
	
	printf("Entrer un nombre dans [-20;20]\n");
	scanf("%d", &num);
	
	if(num <= MAX && MIN >= -20)
	{
		int result = -num * -num * -num + 5 * num + 1;
		printf("Le résultat -x³ + 5 * x + 1 est : %d\n", result);
	}
	
	else if(num > MAX || num < MIN)
	{
		printf("Erreur : hors de l'intervalle.\n");
	}

}