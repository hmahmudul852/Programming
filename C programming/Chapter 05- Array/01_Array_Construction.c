#include<stdio.h>
int main()
{
    //array declaration
    int arr[5];
    //array declaration and initialization
    int arr1[5]={1,2,3,4,5};
    int arr2[]={5,4,3,2,1};

    arr[0]=45;
    arr[1]=78;
    arr[2]=9;
    arr[3]=73;
    arr[4]=12;

    int sz=sizeof(arr2)/sizeof(int);
    printf("Size of arr2: %d\n",sz);

    printf("%d ",arr[0]);
    printf("%d ",arr[1]);
    printf("%d ",arr[2]);
    printf("%d ",arr[3]);
    printf("%d ",arr[4]);

    return 0;
}
