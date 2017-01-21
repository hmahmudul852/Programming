#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,cou=0;
    cin>>n;
    int l[n],r[n];
    for(int i=0;i<n;i++)
        cin>>l[i];
    for(int i=0;i<n;i++)
        cin>>r[i];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            if(l[i]==r[j] && l[i]!=0 && r[j]!=0)
            {
                l[i]=0;
                r[j]=0;
                break;
            }
        }
    for(int i=0;i<n;i++)
        if(l[i]>0)
            cou++;

    cout<<cou<<endl;
    return 0;
}
