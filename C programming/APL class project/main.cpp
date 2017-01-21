#include<cstdio>
#include<cmath>

int main()
{
    double f;
    scanf("%lf",&f);
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",(int)(f/100.00));
    f=fmod(f,100.00);
    printf("%d nota(s) de R$ 50.00\n",(int)(f/50.00));
    f=fmod(f,50.00);
    printf("%d nota(s) de R$ 20.00\n",(int)(f/20.00));
    f=fmod(f,20.00);
    printf("%d nota(s) de R$ 10.00\n",(int)(f/10.00));
    f=fmod(f,10.00);
    printf("%d nota(s) de R$ 5.00\n",(int)(f/5.00));
    f=fmod(f,5.00);
    printf("%d nota(s) de R$ 2.00\n",(int)(f/2.00));
    f=fmod(f,2.00);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",(int)(f/1.00));
    f=fmod(f,1.00);
    printf("%d moeda(s) de R$ 0.50\n",(int)(f/0.50));
    f=fmod(f,0.50);
    printf("%d moeda(s) de R$ 0.25\n",(int)(f/0.25));
    f=fmod(f,0.25);
    printf("%d moeda(s) de R$ 0.10\n",(int)(f/0.10));
    f=fmod(f,0.10);
    printf("%d moeda(s) de R$ 0.05\n",(int)(f/0.05));
    f=fmod(f,0.05);
    printf("%d moeda(s) de R$ 0.01\n",(int)(f/0.01));

    return 0;
}
