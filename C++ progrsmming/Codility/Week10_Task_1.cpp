#include<bits/stdc++.h>

using namespace std;

int solution(vector<int> A)
{
    int max_ending=0,max_slice=0,min_price=A[0];
    if(A.empty() || A.size()==1)
        return 0;
    else
    {
        for(int i=1; i<A.size(); i++)
        {
            max_ending=max(0,A[i]-min_price);
            min_price=min(min_price,A[i]);
            max_slice=max(max_slice,max_ending);
        }
        return max_slice;
    }
}

int main()
{
    vector<int>v{0,21011,21123,21367,21366,21013};
    cout<<solution(v)<<endl;

    return 0;
}


