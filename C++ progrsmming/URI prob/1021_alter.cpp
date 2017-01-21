#include<stdio.h>

double note(double mon, char *type, double nt)
{
    int cou=0;
    while(mon>=nt)
    {
        cou++;
        mon=mon-nt;
    }
    printf("%d %s(s) de R$ %0.2lf\n",cou,type,nt);

    return mon;
}

int main()
{
    double n;
    while(scanf("%lf",&n))
    {
        printf("NOTAS:\n");
        n=note(n,"nota",100.00);
        n=note(n,"nota",50.00);
        n=note(n,"nota",20.00);
        n=note(n,"nota",10.00);
        n=note(n,"nota",5.00);
        n=note(n,"nota",2.00);

        printf("MOEDAS:\n");
        n=note(n,"moeda",1.00);
        n=note(n,"moeda",0.50);
        n=note(n,"moeda",0.25);
        n=note(n,"moeda",0.10);
        n=note(n,"moeda",0.05);
        n=note(n,"moeda",0.01);
    }

    return 0;
}
