#include<stdio.h>

typedef struct com
{
    double re,im;
}com;

com add(com a,com b)
{
    com sum;
    sum.re=a.re+b.re;
    sum.im=a.im+b.im;
    return sum;
}

int main()
{
    com n1,n2;
    printf("Enter the first complex number: ");
    scanf("%lf%lf",&n1.re,&n1.im);

    printf("Enter the second complex number: ");
    scanf("%lf%lf",&n2.re,&n2.im);

    com s1=add(n1,n2);

    printf("SUM= %0.1lf+%0.1lfi",s1.re,s1.im);

    return 0;
}
