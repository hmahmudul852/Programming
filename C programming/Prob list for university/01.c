//1. WAP to check whether a given integer is a prime or not.
#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter any number: ");

    scanf("%d",&a);

    b=sqrt(a);
    int i;
    int isPrime;
    for(i=2;i<=b;i++)
    {
        if(a%i==0){
            isPrime=0;
            break;
        }
        else
            isPrime=1;
    }
    if(isPrime==0)
        printf("NOT PRIME");
    else
        printf("PRIME");

    return 0;
}
