#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<long> ar(5);
    long long sum=0,k1=-2147483648,k2=2147483647;
    for(int i=0;i<5;i++)
    {
        cin>>ar[i];
        sum+=ar[i];
        if(ar[i]!=0)
        {
            if(ar[i]>k1)
                k1=ar[i];
            if(ar[i]<k2)
                k2=ar[i];
        }
    }
    long long ma=0,mi=0;
    ma=sum-k2;
    mi=sum-k1;
    cout<<mi<<" "<<ma<<endl;
    return 0;
}
