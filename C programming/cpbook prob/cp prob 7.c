#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,i,j;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&b);
        c=sqrt(b);
        printf("c = %d\n",c);
        if((c*c)==b)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
