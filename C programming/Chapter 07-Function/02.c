#include<stdio.h>
int div(int a,int b);

int main()
{
    int f,g;
    scanf("%d%d",&f,&g);
    printf("%d",div(f,g));
    return 0;
}
int div(int a,int b)
{
    return a/b;
}
