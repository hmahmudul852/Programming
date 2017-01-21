#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,b,d,sum=0,cou=0;
    cin>>n>>b>>d;
    long long orn[n];
    for(int i=0;i<n;i++)
    {
        cin>>orn[i];
        if(orn[i]<=b)
        {
            sum+=orn[i];
            if(sum>d)
            {
                cou++;
                sum=0;
            }
        }
    }
    cout<<cou<<endl;
    return 0;
}
