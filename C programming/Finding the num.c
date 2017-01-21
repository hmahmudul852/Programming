#include<stdio.h>

#define A 1000000

int arr[A];

int main()

{
    int a;
    printf("Enter the size of the array: ");
    scanf("%d",&a);

    int ar[a];
    int i;
    printf("Now enter %d numbers: ",a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
        arr[ar[i]]++;
    }


    int sm=10000000,gr=-10000000,mo;

    for(i=0;i<a;i++)
        if(ar[i]<sm)
            sm=ar[i];


    for(i=0;i<a;i++)
        if(ar[i]>gr)
            gr=ar[i];


    int arrmax=-1,help;
    for(i=0;i<a;i++)
    {
        if(arr[ar[i]]>arrmax)
        {
            arrmax=arr[ar[i]];
            help=ar[i];
        }
    }

    printf("Grater number = %d\n"
           "Lower number = %d\n"
           "Most common number = %d\n"
           "%d is repeated %d times",gr,sm,help,help,arrmax);

    return 0;
}
