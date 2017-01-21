#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> ar(3);
    for(int i=0;i<3;i++)
        cin>>ar[i];
    sort(ar.begin(),ar.end());
    int sum=(ar[1]-ar[0])+(ar[2]-ar[1]);
    cout<<sum<<endl;
    return 0;
}
