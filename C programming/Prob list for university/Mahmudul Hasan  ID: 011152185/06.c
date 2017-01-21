//  Bismillah hir rahmanir raheem. Thanks to Allah for everything.

//6: WAP to find all the divisors of given integer

#include<stdio.h>

int main()
{
	int num,i;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("All divisors of the integer:\n");

	for(i=1;i<=num;i++)
		if(num%i==0)
			printf("%d\n",i);
   return 0;
}
