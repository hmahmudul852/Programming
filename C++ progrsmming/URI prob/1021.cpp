#include<cstdio>
#include<cmath>

int main()
{
    double n;
    scanf("%lf",&n);
    int m=n;
    n=n*100;
    int f=n;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",m/100);
    m=m%100;
    printf("%d nota(s) de R$ 50.00\n",m/50);
    m=m%50;
    printf("%d nota(s) de R$ 20.00\n",m/20);
    m=m%20;
    printf("%d nota(s) de R$ 10.00\n",m/10);
    m=m%10;
    printf("%d nota(s) de R$ 5.00\n",m/5);
    m=m%5;
    printf("%d nota(s) de R$ 2.00\n",m/2);
    m=m%2;
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",m/1);
    f=f%100;
    printf("%d moeda(s) de R$ 0.50\n",f/50);
    f=f%50;
    printf("%d moeda(s) de R$ 0.25\n",f/25);
    f=f%25;
    printf("%d moeda(s) de R$ 0.10\n",f/10);
    f=f%10;
    printf("%d moeda(s) de R$ 0.05\n",f/5);
    f=f%5;
    printf("%d moeda(s) de R$ 0.01\n",f/1);

    return 0;
}
