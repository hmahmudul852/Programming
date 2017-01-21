//  Bismillah hir rahmanir raheem. Thanks to Allah for everything.

//4. WAP to find LCM of two integers.

#include<stdio.h>

int lcm(int a, int b)
{
    int i;
    for(i=1; ;i++)
    {
        if(i%a==0 && i%b==0)
            return i;
    }
}

int main()
{
    int a,b;
    printf("Enter two integers: ");
    scanf("%d%d",&a,&b);

    printf("LCM of %d and %d = %d",a,b,lcm(a,b));

    return 0;
}
