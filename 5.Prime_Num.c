#include<stdio.h>
#include<math.h>

int main()
{
    int n,i;
    printf("Enter a number : ");
    scanf("%d",&n);

    if (n<=1)
    {
        printf("\n%d is Not a Prime Number\n\n",n);
        return 0;
    }

    for (i=2 ; i<= sqrt(n) ; i++)
    {
        if(n%i == 0)
        {
            printf("\n%d is Not a Prime Number\n\n",n);
            return 0;
        }
    }

    printf("\n%d is a Prime Number\n\n");
    return 0;

}
