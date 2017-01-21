#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        sum+=ar[i];
    }
    int jump=0;
    if(sum<=1)
        jump=n/2;
    else if(sum>1)
        jump=n/sum+1;
    cout<<jump<<endl;
    return 0;
}
