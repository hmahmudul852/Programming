#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,num=5;
    vector<int> ar;
    while(num--)
    {
        cin>>a;
        ar.push_back(a);
    }
    sort(ar.rbegin(),ar.rend());
    for(int i=0;i<ar.size();i++)
    {
        cout<<ar[i];
        if(i!=ar.size()-1)
            cout<<" ";
    }
    cout<<endl;
    return 0;
}
