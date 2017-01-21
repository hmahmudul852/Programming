#include<stdio.h>
#include<ctype.h>

int main()
{
    int a;
    scanf("%d",&a);

    while(a--)
    {
        int b;
        scanf("%d",&b);
        if(b%2==0)
            printf("red\n");
        else
            printf("blue\n");

    }
    return 0;
}
