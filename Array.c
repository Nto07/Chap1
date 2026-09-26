#include <stdio.h>

int main()
{
    int array[100] = {0};
    
    for(int i = 0; i < 100; i++)
    {
        printf("Avant : %d\n", array[i]);
    }


    printf("Rentre un chiffre :");
    scanf("%d", &array[1]);
    printf("%d\n", array[1]);

    for(int i = 0; i < 100; i++)
    {
        printf("Apres : %d\n", array[i]);
    }

}