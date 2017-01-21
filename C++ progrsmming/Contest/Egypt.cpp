#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> ar(3);
    while(cin>>ar[0]>>ar[1]>>ar[2])
    {
        if(ar[0]==0 && ar[1]==0 && ar[2]==0)
            break;
        sort(ar.begin(),ar.end());
        if((ar[0]*ar[0])+(ar[1]*ar[1])==(ar[2]*ar[2]))
            cout<<"right"<<endl;
        else
            cout<<"wrong"<<endl;
    }
    return 0;
}
