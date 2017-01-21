#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,keep,flag=0;
    cin>>n>>m;
    char c;
    while(n--)
    {
        keep=m;
        while(keep--)
        {
           cin>>c;
           if(c=='C' || c=='M' || c=='Y')
                flag=1;
        }
    }
    if(flag==1)
        cout<<"#Color\n";
    else if(flag==0)
        cout<<"#Black&White\n";
    return 0;
}
