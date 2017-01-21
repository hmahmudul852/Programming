#include<stdio.h>

int main()
{
	int a,b;
	printf("enter a num for a & b:");
	scanf("%d%d",&a,&b);
	double c=a/b;
	printf("The result of %d / %d is = %lf",a,b,c);

	getchar();
	getchar();

	return 0;
}