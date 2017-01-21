//  Bismillah hir rahmanir raheem. Thanks to Allah for everything.

//7: WAP to find sum of the divisors of a given integer

#include<stdio.h>

int main()
{
	int num,i,sum=0;
	printf("Enter a number:");
	scanf("%d",&num);
	printf("All divisors of the integer:\n");

	for(i=1;i<=num;i++)
    {
		if(num%i==0)
		{
			printf("%d\n",i);
			sum = sum + i;
        }

	}
	printf("\nSum of the divisors of the integer  = %d\n" , sum);
    return 0;
}
