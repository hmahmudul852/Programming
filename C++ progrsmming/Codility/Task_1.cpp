#include<cstdio>
#include<cstdlib>

int solution(int A[],int N)
{
    int sum=0;
    for(int i=0;i<N;i++)
    {
        sum=sum+A[i];
    }
    int lowest=2147483647;
    int keep,keep1;
    int sm=0;

    for(int i=0;i<N;i++)
    {
        sm=sm+A[i];
        keep=sum-sm;
        keep=keep-sm;
        keep1=abs(keep);
        if(keep1<lowest)
            lowest=keep1;
    }

    int sm1=0;
    for(int i=N;i>=0;i--)
    {
        sm1=sm1+A[i];
        keep=sum-sm1;
        keep=keep-sm1;
        keep1=abs(keep);
        if(keep1<lowest)
            lowest=keep1;
    }

    return lowest;
}

int main()
{
    int N;
    scanf("%d",&N);
    int A[N];

    for(int i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }

    int s=solution(A[],N);

    printf("%d",s);
}
