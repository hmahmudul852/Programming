#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,q,c=1;
    while(cin>>n>>q)
    {
        vector<int> ar,ar2,sa;
        if(n==0 && q==0)
            break;
        int keep1=n,keep2=q;
        while(keep1--)
        {
            int a;
            cin>>a;
            ar.push_back(a);
            ar2.push_back(a);
        }
        sort(ar2.begin(),ar2.end());
        while(keep2--)
        {
            int a;
            cin>>a;
            sa.push_back(a);
        }
        cout<<"CASE# "<<c++<<":"<<endl;
        int position,va,flag=0;
        for(int j=0;j<sa.size();j++)
        {
            for(int i=ar.size()-1;i>=0;i--)
            {
                if(ar[i]==sa[j])
                {
                    flag=1;
                    position=i;
                    break;
                }
            }
            cout<<ar[position]<<" found at "<<position+1<<endl;
            if(flag==0)
                cout<<sa[j]<<" not found"<<endl;
        }
    }
    return 0;
}

