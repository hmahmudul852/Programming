#include<iostream>
#include<set>
#include<vector>

using namespace std;

int solution(vector<int> &A)
{
    set<int>B;
    int si=A.size();
    for(int i=0;i<si;i++)
        B.insert(A[i]);

    return B.size();
}
