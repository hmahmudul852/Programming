#include<bits/stdc++.h>

using namespace std;

int max_slice_sum(vector<int> A)
{
    int max_ending=0,max_slice=0;
    for(int i=0; i<A.size(); i++)
    {
        max_ending=max(0,max_ending+A[i]);
        max_slice=max(max_slice,max_ending);
    }
    return max_slice;
}

int main()
{
    vector<int>v{-5,-7,-3,-5,-2,-4,-10};
    cout<<max_slice_sum(v)<<endl;

    return 0;
}

