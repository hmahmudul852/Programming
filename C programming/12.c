#include<stdio.h>
int main ()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a==10||a==11)
    {
        a=a+5;
        printf("%d",a);
    }
    else if(a==20||a==21)
    {
        a=a+6;
        printf("%d",a);
    }
    return 0;
}
