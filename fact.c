// factorial of a number


#include<stdio.h>

int main()
{
    int n,i,fact;
    printf("Enter a Number : ");
    scanf("%d",&n);
    fact = 1;
    for(i=1;i<=n;i++)
    {
        fact = fact*i;
    }
    printf("%d",fact);



    return 0;
}
