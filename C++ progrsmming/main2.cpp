#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arn[n],ark[k];
    for(int i=0;i<n;i++)
        cin>>arn[i];
    for(int i=0;i<k;i++)
        cin>>ark[i];
    int sum=0;
    for(int j=0;j<n-1;j++)
        sum+=arn[j]*arn[j+1];
    cout<<sum<<endl;
    sum+=arn[0]*arn[n-1];
    cout<<sum<<endl;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<n;j++)
            sum+=arn[j]*arn[ark[i]-1];
        cout<<sum<<endl;
        sum-=arn[ark[i]-1]*arn[ark[i]-1];
        cout<<sum<<endl;
        if((ark[i]-1)==0)
        {
            sum-=arn[0]*arn[1];
            cout<<sum<<endl;
            sum-=arn[0]*arn[n-1];
            cout<<sum<<endl;
        }
        else if((ark[i]-1)==n-1)
        {
            sum-=arn[n-2]*arn[n-1];
            cout<<sum<<endl;
            sum-=arn[0]*arn[n-1];
            cout<<sum<<endl;
        }
        else if((ark[i]-1)>0 && (ark[i]-1)<n-1)
        {
            sum-=arn[ark[i]-2]*arn[ark[i]-1];
            cout<<sum<<endl;
            sum-=arn[ark[i]-1]*arn[ark[i]];
            cout<<sum<<endl;
        }
    }
    cout<<sum<<endl;
    return 0;
}
