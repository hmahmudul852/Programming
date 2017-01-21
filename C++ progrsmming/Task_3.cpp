#include<cstdio>
solution(int A[],int N)
{
    int sum=0,sum1=0;
    for(int i=0;i<(N);i++)
        sum=sum+A[i];
    for(int i=1;i<=(N+1);i++)
        sum1=sum1+i;
    return (sum1-sum);
}
