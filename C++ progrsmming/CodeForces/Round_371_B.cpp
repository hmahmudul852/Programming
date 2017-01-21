#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,flag=1;
    cin>>n;
    long long ar[n],sum=0,ma=-9223372036854775808,mi=9223372036854775807;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        sum+=ar[i];
        ma=max(ma,ar[i]);
        mi=min(mi,ar[i]);
    }
    int avg=sum/n;
    long long keep=avg-mi;
//    cout<<ma<<" "<<mi<<" "<<sum<<" " <<avg<<" "<<keep<<endl;
    if(ma>avg && ma-keep!=avg)
        cout<<"NO\n";
    else
    {
        for(int i=0;i<n;i++)
        {
            if(ar[i]<avg && (ar[i]+keep)!=avg)
            {
                flag=0;
                break;
            }
            else if(ar[i]>avg && (ar[i]-keep)!=avg)
            {
//                cout<<ar[i]-keep<<endl;
                flag=0;
                break;
            }
        }
        if(flag==1)
            cout<<"YES\n";
        else if(flag==0)
            cout<<"NO\n";
    }
    return 0;
}
