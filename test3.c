#include <stdio.h>

int main()
{
	int t;
	printf("Saisir une température en °C :");
	scanf("%d", &t);
	
	int d = 1.8 * t + 32;

	printf("T = %d, F = %d\n", t, d);
}