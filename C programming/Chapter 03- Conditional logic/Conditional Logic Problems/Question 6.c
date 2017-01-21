/*Write a program to check whether a triangle is valid or not, when the three angles
of the triangle are entered by the user. A triangle is valid if the sum of all the
three angles is equal to 180 degrees.*/
#include<stdio.h>
int main()
{
    int a,b,c,t;
    printf("Enter three angels of a triangle: ");
    scanf("%d%d%d",&a,&b,&c);
    t=a+b+c;
    if(t==180)
        printf("Its a triangle");
    else
        printf("Its not a triangle");

    return 0;
}
