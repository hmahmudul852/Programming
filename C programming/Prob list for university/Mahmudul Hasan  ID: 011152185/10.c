//  Bismillah hir rahmanir raheem. Thanks to Allah for everything.

//10: WAP to get summation of two x-based numbers.

#include<stdio.h>
#include<math.h>

int anybase_decimal(int num,double base);
int findSum(int a,int b);

int main()
{
	int num1,num2,turn_num1,turn_num2,sum;
	double base1,base2;

	printf("Enter any number: ");
	scanf("%d",&num1);

	printf("Enter base of the number:");
	scanf("%lf" ,&base1);

	printf("Enter any number: ");
	scanf("%d",&num2);

	printf("Enter base of the number:");
	scanf("%lf" ,&base2);

	turn_num1 = anybase_decimal(num1,base1);
	printf("Equivalent decimal value of %d from base %.0lf: %d",num1,base1,turn_num1);
	printf("\n");

	turn_num2 = anybase_decimal(num2,base2);
	printf("Equivalent decimal value of %d from base %.0lf: %d",num2,base2,turn_num2);
	printf("\n");

	sum = findSum(turn_num1,turn_num2);
	printf("Sum (decimal value) = %d\n" ,sum);
	return 0;
}

int anybase_decimal(int num,double base)
{
	int temp_turn_num =0;
	double i=0;

	for(;num!=0;num=num/10)
		 temp_turn_num = temp_turn_num + (num % 10) * pow(base,i++);

	return temp_turn_num;
}

int findSum(int a,int b)
{
	int temp_sum = a+b;
	return temp_sum;
}
