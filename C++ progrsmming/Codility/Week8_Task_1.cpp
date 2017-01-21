#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int solution(vector<int> &A)
{
    sort(A.begin(),A.end());
    int si=A.size();
    for(int i=2;i<si;i++)
    {
        long long a=((long long)A[i-2]+(long long)A[i-1]);
        if(a>A[i])
            return 1;
    }
    return 0;
}


