#include<bits/stdc++.h>

using namespace std;

int solution(int A[], int N)
{
    int cou=0;
    int ma=0;
    for(int i=0;i<N;i++)
        if(ma<A[i])
            ma=A[i];
    for(int i=0;i<N;i++)
        if(A[i]>0 && A[i]<ma)
            cou++;
    return cou;
}

int main()
{
    cout<<solution({1,3,6,4,1,2},6);
}

