#include<stdio.h>

int main()
{
    double num1,num2,sum;
    printf("Lets add two numbers!\n\nHere put two numbers of your choice: ");
    scanf("%lf %lf",&num1,&num2);
    sum=num1+num2;
    printf("\nThe Summetion of two numbers:%.2lf\n\n",sum );

    return 0;
}
