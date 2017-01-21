//Question 3 Write a C/C++ program to reverse the element of an integer 1-D array.
#include<stdio.h>
int main()
{
    int s;
    printf("Enter the size of array: ");
    scanf("%d",&s);
    int a[s],b[s];
    int c,d,e=s-1,f;
    for(c=0;c<s;c++)
        scanf("%d",&a[c]);
    for(d=0;d<s;d++)
    {
        b[d]=a[e];
        e--;
    }
    for(f=0;f<s;f++)
        printf("%d ",b[f]);
    return 0;
}
