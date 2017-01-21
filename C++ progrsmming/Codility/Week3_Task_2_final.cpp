#include<cstdio>
#include<vector>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;

vector<int> solution(vector<int>&A,int K)
{
    reverse(A.begin(),A.end());
    //cout<<l<<endl;
    if(!A.empty())
    {
        while(K--)
        {
            int temp=A[0];
            A.erase(A.begin(),A.begin()+1);
            A.push_back(temp);
        }
    }
    reverse(A.begin(),A.end());
    return A;
}

int main()
{
    vector<int>A={1,1,2,3,5};
    int K=42;
    vector<int>B=solution(A,K);
    for(int i=0;i<B.size();i++)
        printf("%d ",B[i]);
    return 0;
}

