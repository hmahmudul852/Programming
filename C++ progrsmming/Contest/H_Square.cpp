#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,cs=0;
    cin>>t;
    while(t--)
    {
        cs++;
        int n,flag=1,flag1=1;
        scanf("\nN = %d",&n);
        long long m[n][n];
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            {
                cin>>m[i][j];
                if(m[i][j]<0) flag=0;
            }
        for(int i=0,k=n-1;i<n;i++,k--)
            for(int j=0,l=n-1;j<n;j++,l--)
            {
                if(m[i][j]!=m[k][l])
                {
                    flag=0;
                    break;
                }
            }
        if(flag==1)
            cout<<"Test #"<<cs<<": Symmetric."<<endl;
        else
            cout<<"Test #"<<cs<<": Non-symmetric."<<endl;

    }
    return 0;
}
