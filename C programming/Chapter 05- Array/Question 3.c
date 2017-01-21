//Question 3 Write a C/C++ program to reverse the element of an integer 1-D array.
#include<stdio.h>
int main()
{
    int s;
    printf("Enter the size of the array: ");
    scanf("%d",&s);
    int a[s];
    int b,c,d,e;
    for(b=0;b<s;b++)
    {
        scanf("%d",&a[b]);
    }
    for(c=s-1;c<=0;c--)
    {
        printf("%d ",a[c]);
    }
    return 0;
}
