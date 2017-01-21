#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,ca=1;
    cin>>t;
    while(t--)
    {
        int n,m,a;
        cin>>n>>m;
        vector<long long>l(n),r(m);
        for(int i=0;i<n;i++)
        {
            cin>>a;
            l.push_back(a);
        }
        for(int i=0;i<m;i++)
        {
            cin>>a;
            r.push_back(a);
        }
        int i=l.size()-1,j=0,time=0;
        while(i>=0 && j<r.size())
        {
            if(l[i]<r[j])
            {
                time+=l[i];
                i--;
            }
            else if(l[i]>r[j])
            {
                time+=r[j];
                j++;
            }
        }
        cout<<"Case "<<ca<<": ";
        cout<<time<<endl;
        ca++;
    }
    return 0;
}
