#include<bits/stdc++.h>

using namespace std;

int ch[500001];

int main()
{
    unsigned int n,x;
    cin>>n>>x;
    int ar[n];

    for(int i=0;i<n;i++)
        cin>>ar[i];
    int cou=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            unsigned int ans=ar[i]^ar[j];
            if(ans==x && ch[i]==0 && ch[j]==0)
            {
//                cout<<ar[i]<<" "<<ar[j]<<endl;
                cou++;
                ch[i]=1;
                ch[j]=1;
            }
        }

    }
    cout<<cou<<endl;
    return 0;
}
