#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,cou=0;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
            cin>>ar[i];
        for(int i=0;i<n-1;i++)
            for(int j=i+1;j<n;j++)
            {
                if(ar[i]==ar[j])
                {
                    cou+=2;
                }
            }
        cout<<cou<<endl;
    }
    return 0;
}

