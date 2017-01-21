#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    printf("%d\n",a);
    printf("%d nota(s) de R$ 100,00\n",a/100);

    int b=a%100;
    printf("%d nota(s) de R$ 50,00\n",b/50);

    int c=b%50;
    printf("%d nota(s) de R$ 20,00\n",c/20);

    int d=c%20;
    printf("%d nota(s) de R$ 10,00\n",d/10);

    int e=d%10;
    printf("%d nota(s) de R$ 5,00\n",e/5);

    int f=e%5;
    printf("%d nota(s) de R$ 2,00\n",f/2);

    int g=f%2;
    printf("%d nota(s) de R$ 1,00\n",g/1);
    return 0;
}
