/*Write a program to calculate the total new_exenses, Quantity and price per item are
input by the user and discount of 10% is offered if the new_exense is more than
5000.*/
#include<stdio.h>
int main()
{
    double ex,qu,pr,discount,new_ex;
    printf("If u buy is more 5000 taka u'll get 10%% discount\n");
    printf("Now enter the quantity of ur product: ");
    scanf("%lf",&qu);
    printf("Now enter the price of ur product: ");
    scanf("%lf",&pr);
    ex=qu*pr;
    if(ex>=5000)
    {
        discount=(ex*10)/100;
        new_ex=ex-discount;
        printf("U have bought %0.1lf. After 10%% discount ur new expense is %0.1lf",ex,new_ex);
    }
    else
    {
        printf("Ur new expense is %0.1lf",ex);
    }
    return 0;
}

