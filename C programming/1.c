#include<stdio.h>
int main ()
{
    int a,b;
    printf("Enter a value for a & b:");
    scanf("%d%d",&a,&b);
    if(a==b)
    {
        printf("%d & %d are equal",a,b);
    }
    else
    {
        printf("%d & %d are not equal",a,b);
    }
    return 0;
}
