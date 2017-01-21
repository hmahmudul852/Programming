#include<stdio.h>

int solution(int X,int A[],int N)
{
    int B[X];
    int i;
    for(i=0;i<X;i++)
        B[i]=0;
    for(i=0;i<N;i++)
    {
        if(B[A[i]]==1)
            A[i]=0;
        else
            B[A[i]]=1;
    }

    int con=0;
    for(i=0;i<=X;i++)
        if(B[i]==1)
            con++;

    if(con==X)
    {
        int cou=0;
        for(i=0;i<N;i++)
        {
            if(A[i]<=X && A[i]!=0)
            {
                cou++;
                if(cou==X)
                    return i;
            }
        }
    }
    else
        return -1;
}


