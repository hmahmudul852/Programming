#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k,n,cou=0;
    cin>>k>>n;
    if(k==0)
        cout<<n;
    else if(k==1)
        cout<<n*(n+1)/2<<endl;
    else
    {
        for(int i=1;i<=n;i++)
        {
            cou+=i*(i+1)/2;
//            cout<<cou<<endl;
        }

        cout<<cou<<endl;
    }
    return 0;
}
