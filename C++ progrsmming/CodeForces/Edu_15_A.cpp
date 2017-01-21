#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    long long ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];

    int cou,i,j,ma=0;
    for(i=0;i<n;i++)
    {
        cou=1;
        for(j=i;j<n-1;j++)
        {
            if(ar[j]<ar[j+1])
                cou++;
            else if(ar[j]==ar[j+1])
                cou=cou;
            else
                break;
        }
        i=j;
        ma=max(ma,cou);
    }
    cout<<ma<<endl;
}
