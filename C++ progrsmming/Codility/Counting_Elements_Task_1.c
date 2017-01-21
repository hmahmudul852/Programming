#include<stdio.h>

int solution(int A[],int N)
{
    int B[N];
    int i;
    for(i=1;i<N;i++)
        B[i]=0;
    //B[0]=1;
    for(i=0;i<N;i++)
    {
        if(A[i]<=N)
        {
            int free=A[i];
            B[free]=1;
        }
    }
    int con=0;
    for(i=1;i<=N;i++)
        if(B[i]==1)
            con++;
    if(con==N)
        return 1;
    else
        return 0;
}

