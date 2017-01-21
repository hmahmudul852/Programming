#include<stdio.h>
int main()
{
    int a;
    float b;
    double c;
    char d;
    printf("Enter a value for int: ");
    scanf("%d",&a);
    printf("Enter a value for float: ");
    scanf("%f",&b);
    printf("Enter a value for double: ");
    scanf("%lf",&c);
    printf("Enter a value for character: ");
    scanf(" %c",&d);
    printf("%d\n",a);
    printf("%f\n",b);
    printf("%lf\n",c);
    printf("%c",d);
    return 0;
}
