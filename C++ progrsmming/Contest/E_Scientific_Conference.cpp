#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    pair<int,int> t;
    vector<pair<int,int>> ar(n);
    int s,e;
    for(int i=0;i<n;i++)
    {
        cin>>s>>e;
        t.first=e;
        t.second=s;
        ar[i]=t;
    }
    sort(ar.begin(),ar.end());
    int cou=0,l=0,j;
    for(j=0;j<ar.size();j++)
    {
        if(l<ar[j].second)
        {
            cou++;
            l=ar[j].first;
        }
    }
    cout<<cou<<endl;
    return 0;
}
