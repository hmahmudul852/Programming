#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number u like: ");
    scanf("%d",&a);
    if(a>0)
        printf("The number is (%d) positive",a);
    else if(a<0)
        printf("The number is (%d) negative",a);
    else
        printf("The number is %d",a);
    return 0;
}

