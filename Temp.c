#include <stdio.h>

int main()
{
    int tempC;
    int tempF;
    printf("Entrer une temperature en celcius ;");
    scanf("%d", &tempC);

    tempF = (float)(1.8 * tempC) + 32;
    
    printf("Temperature en celcius ;%d, Temperature en Fahrenheit; %d", tempC, tempF);
}