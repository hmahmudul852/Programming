#include<stdio.h>
int main()
{
    int a,b,div;
    printf("Enter a number: ");
    scanf("%d",&b);
    for(a=2;a<b;a++)
    {
        div=b%a;
        if(div==0)
            break;
    }
    if(div==0)
        printf("The number '%d' is not a prime number",b);
    else
        printf("The number '%d' is a prime number",b);
    return 0;
}

