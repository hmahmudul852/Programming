/*Question 1 Write a C/C++ program to find the sum and average of one dimensional integer
array.*/
#include<stdio.h>
int main()
{
    int b,c,s;
    double sum=0,avg;
    printf("Enter the size of array: ");
    scanf("%d",&s);
    int a[s];
    for(b=0;b<s;b++)
    {
        scanf("%d",&a[b]);
        sum=sum+a[b];
    }
    avg=sum/s;
    printf("sum = %.0lf\n",sum);
    printf("average = %.2lf",avg);
    return 0;
}
