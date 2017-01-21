//  Bismillah hir rahmanir raheem. Thanks to Allah for everything.

/*21: WAP to get the summation of x_based and y_based number and print
              the answer in z_based number*/

#include<stdio.h>

#include<math.h>

int anybase_decimal(int num,double base);

int findSum(int a,int b);

void turn_sum_base(int z,int sum_base);

int main()
{
	int num1,num2,turn_num1,turn_num2,sum,sum_base;
	double base1,base2;

	printf("Enter any number: ");
	scanf("%d",&num1);

	printf("Enter base of the number:");
	scanf("%lf" ,&base1);

	printf("Enter any number: ");
	scanf("%d",&num2);

	printf("Enter base of the number:");
	scanf("%lf" ,&base2);

	printf("Enter base-number u want to convert the sum into: ");
	scanf("%d",&sum_base);

	turn_num1 = anybase_decimal(num1,base1);
	printf("Equivalent decimal value of %d from base %.0lf: %d",num1,base1,turn_num1);

	printf("\n");

	turn_num2 = anybase_decimal(num2,base2);
	printf("Equivalent decimal value of %d from base %.0lf: %d",num2,base2,turn_num2);
	printf("\n");

	sum = findSum(turn_num1,turn_num2);
	printf("Sum (decimal value) = %d\n" ,sum);
	turn_sum_base(sum,sum_base);

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
void turn_sum_base(int z,int sum_base)
{
	int x;
	int turn_num[100],i=1,j;
	for(x=z;x!=0;x=x/sum_base)
		turn_num[i++]= x % sum_base;

	printf("Equivalent value of %d of %d base: ",z,sum_base);
	for(j=i-1;j>0;j--)
		printf("%d",turn_num[j]);

	printf("\n");
}
