/*Write a program to determine whether the seller has made profit or incurred loss.
Also determine how much profit he made or loss he incurred. Cost price and
selling price of an item is input by the user.*/
#include<stdio.h>
int main()
{
    int cp,sp,pr,lo;
    printf("Enter ur cost price and selling price: ");
    scanf("%d%d",&cp,&sp);
    if(cp>sp)
    {
        lo=cp-sp;
        printf("U made loss\n"
               "U have loss %d taka",lo);
    }
    else if(sp>cp)
    {
        pr=sp-cp;
        printf("U made profit\n"
               "U have profit %d taka",pr);
    }
    else
        printf("U have'nt earned any");
    return 0;
}

