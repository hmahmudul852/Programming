#include<stdio.h>

int main()

{
    int a;
    scanf("%d",&a);

    int n,i;
    while(a--)
    {
        scanf("%d",&n);
        if(n%2==0)
            printf("even\n");
        else
            printf("odd\n");
    }
    return 0;
}
