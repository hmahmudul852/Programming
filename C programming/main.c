#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    int jump=0;
    int i=0;
    while(i<n)
    {
        if(ar[i+2]==0)
        {
            jump++;
            i=i+2;
        }
        else if(ar[i+1]==0)
        {
            jump++;
            i++;
        }
    }
    cout<<jump-1<<endl;
    return 0;
}

