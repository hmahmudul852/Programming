/*Question 6 P is one-dimensional array of integers. Write a C/C++ function to efficiently
search for a data VAL from P. If VAL is present in the array then the function
should return value 1 and 0 otherwise.*/
#include<stdio.h>
int main()
{
    int s;
    printf("Enter the size of array: ");
    scanf("%d",&s);
    int a[s];
    int b,c,d,e,f=0;
    printf("Enter the %d values in the array: ",s);

    for(b=0;b<s;b++)
    {
        scanf("%d",&a[b]);
    }
    printf("Enter the value u want to find in the array: ");
    scanf("%d",&c);
    for(d=0;d<s;d++)
    {
        if(a[d]==c)
        {
            f=1;
            break;
        }
    }
    if(f==1)
        printf("Value %d is found",c);
    else
        printf("Value %d is not found"),c;
    return 0;
}
