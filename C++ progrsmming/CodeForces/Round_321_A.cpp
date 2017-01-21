#include<bits/stdc++.h>

using namespace std;

int main()
{
    unsigned int n,cou=1,ma=1;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    for(int i=0;i<n-1;i++)
    {
        if(ar[i]<=ar[i+1])
            cou++;
        else
        {
            ma=max(cou,ma);
            cou=1;
        }
    }
    ma=max(cou,ma);
    cout<<ma<<endl;
    return 0;
}
