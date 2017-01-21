#include<bits/stdc++.h>

using namespace std;

void A(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(i>1)
        {
            if(i%2==0)
                cout<<"-";
            else
                cout<<"+";
        }
        cout<<"sin("<<i;
    }
    for(int i=1;i<=n;i++)
        cout<<")";
}

void S(int n)
{
    for(int i=0;i<n-1;i++)
        cout<<"(";
    for(int i=0;i<n;i++)
    {
        A(i+1);
        if(n-i==1)
            cout<<"+"<<n-i;
        else
            cout<<"+"<<n-i<<")";
    }
}

int main()
{
    int n;
    cin>>n;
    S(n);
    cout<<endl;
    return 0;
}
