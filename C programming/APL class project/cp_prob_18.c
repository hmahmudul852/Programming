#include<stdio.h>

int main()

{
    int a;
    scanf("%d",&a);


    char x,y,z;


    while(a--)
    {
        if(y>=(2*x)||z>=(2*x))
            printf("YES");

        else
            printf("NO");
    }
    return 0;
}
