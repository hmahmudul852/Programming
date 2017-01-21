/*Any integer is input by the user. Write a program to find out whether it is an odd
number or even number.*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter any numbers: ");
    scanf("%d",&a);
    if(a%2==0)
        printf("The number is '%d' even",a);
    else
        printf("The number is '%d' odd",a);
    return 0;
}
