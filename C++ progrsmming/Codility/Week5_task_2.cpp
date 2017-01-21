#include<cstdio>
#include<vector>

using namespace std;

int solution(int N)
{
    vector<int>divisor;
    int a,sol;

    for(int i=1;i<=N;i++)
        if(N%i==0)
            divisor.push_back(i);

    if((divisor.size())%2==0)
    {
        a=(divisor.size())/2;
        sol=(divisor[a]*2)+(divisor[a-1]*2);
    }
    else
    {
        a=(divisor.size())/2;
        sol=divisor[a]*4;
    }
    return sol;
}
