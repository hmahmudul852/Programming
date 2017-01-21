#include<bits/stdc++.h>

using namespace std;

int main()
{
    size_t n,k,cou=0;
    cin>>n>>k;
    size_t ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
        {
            int dif=ar[i]-ar[j];
            if(abs(dif)==k)
            {
                cou++;
            }
        }


    cout<<cou<<endl;
    return 0;
}
