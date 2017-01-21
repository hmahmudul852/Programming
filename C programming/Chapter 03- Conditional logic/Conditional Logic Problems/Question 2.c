/*Find the absolute value of a number entered by the user.*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter any thing u want: ");
    scanf("%d",&a);
    if(a<0)
        a*=(-1);
    else
        a=a;
    printf("The absolute value is '%d'",a);
    return 0;
}
