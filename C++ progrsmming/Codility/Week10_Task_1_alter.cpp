#include<bits/stdc++.h>

using namespace std;

int max_slice_sum(vector<int> A)
{
    vector<int>:: iterator ma;
    vector<int>:: iterator mi;

    ma=max_element(A.begin(),A.end());
    int mapos=distance(A.begin(),ma);
    mi=min_element(A.begin(),A.end());
    int mipos=distance(A.begin(),mi);



    return (A[mapos]-A[mipos]);
}

int main()
{
    vector<int>v{23171,21011,21123,21367,21366,21013};
    cout<<max_slice_sum(v)<<endl;

    return 0;
}



