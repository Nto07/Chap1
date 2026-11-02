#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>

int main()

{
	int a = 0;	

	do
	{

		printf("%d\n", a);
		a++;
	}	

	while(a >= 0);
}