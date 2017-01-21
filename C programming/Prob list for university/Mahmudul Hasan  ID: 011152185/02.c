//  Bismillah hir rahmanir raheem. Thanks to Allah for everything.

//2. WAP to check whether two integers are relatively prime or not.

#include<stdio.h>

int gcd(int a, int b)
{
    int c;
    while(a!=0)
    {
        c=a;
        a=b%a;
        b=c;
    }
    return b;
}

int main()
{
    int a,b;
    printf("Enter two integers: ");
    scanf("%d%d",&a,&b);

    if(gcd(a,b)==1)
        printf("%d and %d are relatively prime numbers.",a,b);
    else
        printf("%d and %d are not relatively prime numbers.",a,b);

    return 0;
}

