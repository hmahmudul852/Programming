#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    int mi=123456,pos;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(A[i]==A[j])
            {
                pos=i-j;
                mi=min(mi,pos);
            }
        }
    }
    if(mi==123456)
        cout<<"-1\n";
    else
        cout<<mi<<endl;
    return 0;
}
