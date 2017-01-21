#include<cstdio>

int gcd(int a,int b)
{

	if(a == b)
		return a;

	if(a > b)
		gcd(a-b,b);
	else
		gcd(a,b-a);
}

int main()
{
    int a=5,b=4;
    printf("%d",gcd(a,b));
    return 0;
}
