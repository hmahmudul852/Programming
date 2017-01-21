//  Bismillah hir rahmanir raheem. Thanks to Allah for everything.

//5: WAP to convert a given x_based number into y_based number.

#include<stdio.h>
#include<math.h>

void anybase_decimal(int num);
void decimal_anybase(int num);

int main()
{
	int num;
	printf("Enter any number: ");
	scanf("%d",&num);

	anybase_decimal(num);
	decimal_anybase(num);
	return 0;
}

void anybase_decimal(int num)
{
	int turn_num =0;
	double i=0,base;
	printf("Enter base of the number:");
	scanf("%lf" ,&base);

	for(;num!=0;num=num/10)
		 turn_num = turn_num + (num % 10) * pow(base,i++);

	printf("Equivalent value: %d",turn_num);
	printf("\n");
}

void decimal_anybase(int num)
{
	int base,x;
	int turn_num[100],i=1,j;
	printf("Enter base-number want to convert into: ");
	scanf("%d",&base);

	for(x=num;x!=0;x=x/base)
		turn_num[i++]= x % base;

	printf("Equivalent value of %d of %d base: ",num,base);
	for(j=i-1;j>0;j--)
		printf("%d",turn_num[j]);

	printf("\n");
}
