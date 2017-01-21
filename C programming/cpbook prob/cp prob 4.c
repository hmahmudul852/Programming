#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i,f,x,y,z;
    for(i=0;i<a;i++)
    {
        scanf("%d%d%d",&x,&y,&z);
        f=x*y*z;
        printf("%d\n",f);
    }
    return 0;
}
