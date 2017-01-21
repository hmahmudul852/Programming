#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,x;
    cin>>n>>x;
    vector<long long> ar;
    while(n--)
    {
        char c;
        long long a;
        cin>>c;
        cin>>a;
        if(c=='+')
            ar.push_back(a);
        else if(c=='-')
        {
            a=a*-1;
            ar.push_back(a);
        }
    }
    long long ice=x,cry=0;
    for(long long i=0;i<ar.size();i++)
    {
        if(ar[i]>0)
            ice=ice+ar[i];
        else if(ar[i]<=0)
        {
            long long keep=-1*ar[i];
            if(keep<=ice)
                ice=ice+ar[i];
            else if(keep>ice)
                cry++;
        }
    }
    cout<<ice<<" "<<cry<<endl;
    return 0;
}
