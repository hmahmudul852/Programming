#include<bits/stdc++.h>

using namespace std;

int count(int S[],int m,int n)
{
    int x,y;
    int keep[n+1][m];

    for (int i=0;i<m;i++)
        keep[0][i]=1;

    for(int i=1;i<n+1;i++)
    {
        for (int j=0;j<m;j++)
        {
            if(i-S[j]>=0)
                x=keep[i-S[j]][j];
            else
                x=0;
            if(j>=1)
                y=keep[i][j-1];
            else
                y=0;
            keep[i][j]=x+y;
        }
    }
    return keep[n][m-1];
}

int main()
{
    int n;
    int ar[]={1,5,10,25,50};
    int si=5;
    while(cin>>n)
    {
        cout<<count(ar,si,n)<<endl;
    }
    return 0;
}
