#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Now enter the values: ");
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int total=0,j;
    for(j=0;j<n;j++)
    {
        total=total+arr[j];
        printf("%d",arr[j]);
        if(j==n-1)
            continue;
        printf("+");
    }
    printf("=%d",total);

    return 0;
}
