#include<stdio.h>

#define MAX 1000000
int CSArray[MAX];

void CumulativeSum(int arr[], int Size)
{
    CSArray[0]=arr[0];
    int i;
    for(i=1;i<Size;i++)
        CSArray[i]=CSArray[i-1]+arr[i];
}

int solution(int A[], int N)
{
    CumulativeSum(A,N);
    int sum=0,i;
    for(i=0;i<N;i++)
    {
        if(A[i]==0)
        {
            sum+=CSArray[N-1]-CSArray[i];
        }
    }

    if(sum>1000000000)
        return -1;
    else
        return sum;
}

int main()
{
    int A[]={0,1,0,1,1};
    //solution(A,5);
    printf("%d",solution(A,5));
    return 0;
}
