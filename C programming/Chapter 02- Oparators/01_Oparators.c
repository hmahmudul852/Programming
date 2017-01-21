#include<stdio.h>

int main()
{
    int a=15,b=4;
    a+=b;  //a=a+b
    printf("a+=b : %d\n",a);

    a-=b;//a=a-b
    printf("a-=b : %d\n",a);

    a*=b;//a=a*b
    printf("a*=b : %d\n",a);

    a/=b;//a=a/b
    printf("a/=b : %d\n",a);

    a%=b;//a=a%b
    printf("a%%=b : %d\n",a);

    printf("");


    return 0;
}
