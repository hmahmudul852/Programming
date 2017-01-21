#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        int v,ma=0,sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>v;
            sum+=v;
            if(sum>ma)
                ma=sum;
            if(sum<0)
                sum=0;
        }
        if(ma>0)
            cout<<"The maximum winning streak is "<<ma<<"."<<endl;
        else
            cout<<"Losing streak.\n";
    }
    return 0;
}
