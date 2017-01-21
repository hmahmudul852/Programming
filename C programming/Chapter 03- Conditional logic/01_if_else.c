#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number u like: ");
    scanf("%d",&a);
    if(a>0)
        printf("The number is (%d) positive",a);
    else
        printf("The number is (%d) negative",a);

    return 0;
}
