#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number: ");
    scanf("%d",&a);

    int check;
    if(a%2==0)
        check=0;
    else
        check=1;

    switch(check)
    {
        case 0:
            printf("The number is even");
            break;
        case 1:
            printf("The number is odd");
            break;
        default:
            printf("ERROR");
    }

    return 0;
}
