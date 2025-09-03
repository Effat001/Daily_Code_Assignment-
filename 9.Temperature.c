#include<stdio.h>

int main()
{
    float celsius,fahrenheit;
    printf("Temperature in  fahrenheit: ");
    scanf("%f",&fahrenheit);

    celsius= (fahrenheit-32)*5/9;

    printf("\nTemrerature in Celsius:%.2f\n\n",celsius);

    return 0;
}
