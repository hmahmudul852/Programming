/*Question 2 Write a C/C++ program to swap first and last element of an integer 1-d array.*/
#include<stdio.h>
int main()
{
    int b,c,s;
    printf("Enter the size of array: ");
    scanf("%d",&s);
    int a[s];
    for(b=0;b<s;b++)
        scanf("%d",&a[b]);

    int x=a[0],y=a[s-1];
    a[s-1]=x;
    a[0]=y;
    for(b=0;b<s;b++)
        printf("%d",a[b]);
    return 0;
}
