//Question 4 Write a C/C++ program to find the largest and smallest element of an array.
#include<stdio.h>
int main()
{
    int s;
    printf("Enter the size of array: ");
    scanf("%d",&s);
    printf("Enter value between 99999 to -99999\n");
    int a[s];
    int b,c,d,max=-99999,min=99999;
    for(b=0;b<s;b++)
        scanf("%d",&a[b]);
    for(c=0;c<s;c++)
    {
        if(a[c]>max)
            max=a[c];
    }
    for(d=0;d<s;d++)
    {
        if(a[d]<min)
            min=a[d];
    }
    printf("Maximum value= %d\nMinimum value= %d",max,min);
    return 0;
}
