#include<stdio.h>
#include<math.h>

int main ()
{
    int n,total=0;
    double square;
    int i;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
        printf("%d^2",i);
        total=total+(square=pow (i,2.0));
        if(i==n)
            continue;
        printf("+");
    }
    printf("=%d",total);

    return 0;
}
