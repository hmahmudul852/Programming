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
    sum+=arn[0]*arn[n-1];
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<n;j++)
            sum+=arn[j]*arn[ark[i]-1];
        sum-=arn[ark[i]-1]*arn[ark[i]-1];
        if((ark[i]-1)==0)
        {
            sum-=arn[0]*arn[1];
            sum-=arn[0]*arn[n-1];
        }
        else if((ark[i]-1)==n-1)
        {
            sum-=arn[n-2]*arn[n-1];
            sum-=arn[0]*arn[n-1];
        }
        else if((ark[i]-1)>0 && (ark[i]-1)<n-1)
        {
            sum-=arn[ark[i]-2]*arn[ark[i]-1];
            sum-=arn[ark[i]-1]*arn[ark[i]];
        }
    }

    for(int i=0;i<k-1;i++)
    {
        for(int j=i+1;j<k;j++)
        {
            if(ark[i]-ark[j]!=1 || ark[i]-ark[j]!=-1)
                sum-=arn[ark[i]-1]*arn[ark[j]-1];
            else if(ark[i]-ark[j]!=n-1 || ark[i]-ark[j]!=-(n-1))
                sum-=arn[ark[i]-1]*arn[ark[j]-1];
        }
    }
    for(int i=0;i<k-1;i++)
    {

    }
    cout<<sum<<endl;
    return 0;
}
