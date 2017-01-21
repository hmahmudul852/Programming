//  Bismillah hir rahmanir raheem. Thanks to Allah for everything.

//3. WAP to find GCD of two integers.

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

    printf("GCD of %d and %d = %d",a,b,gcd(a,b));

    return 0;
}
