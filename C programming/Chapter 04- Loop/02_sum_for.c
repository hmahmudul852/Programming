#include<stdio.h>
int main()
{
    int s,e,sum=0;
    printf("Enter the starting & ending value: ");
    scanf("%d%d",&s,&e);
    for(s;s<=e;s++)
        sum+=s;
    printf("The sum of the limit is %d",sum);
    return 0;
}

