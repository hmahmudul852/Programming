#include<stdio.h>

//int[] aradd(int a[],int sa,int b[],int sb)
//{
//    int C[sa];
//    int i;
//    for(i=0;i<sa;i++)
//    {
//        C[i]=a[i]+b[i];
//    }
//
//    return C;
//}

int C[100];

void aradd(int a[],int sa,int b[],int sb)
{
    int i;
    for(i=0;i<sa;i++)
    {
        C[i]=a[i]+b[i];
    }
}

void add(int a[],int sa)
{
    int i;
    for(i=0;i<sa;i++)
        printf("%d ",a[i]);

    printf("\n\n");
}

//void printit()
//{
//    printf("Please go to the next question.");
//    printf("\n");
//    int i;
//    for(i=0;i<5;i++)
//        printf(". ");
//}

int main()
{
    int A[5]={1,2,3,4,5},B[5]={6,7,8,9,10};

    add(A,5);
    add(B,5);

    aradd(A,5,B,5);
    add(C,5);

    return 0;
}

