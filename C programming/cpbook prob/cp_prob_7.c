#include<stdio.h>
#include<math.h>

int main()
{
    int a;
    scanf("%i",&a);
    int i;
    float b,c,d;
    for(i=0;i<a;i++)
    {
        scanf("%f",&b);
        c=sqrt(b);
        d=ceil(c);
        if(c==d)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
