#include<bits/stdc++.h>

using namespace std;

int main()
{
    int line,sum=0;
    cin>>line;
    while(line--)
    {
        int p,v,t;
        cin>>p>>v>>t;
        if(p==1 && v==1 && t==1)
            sum++;
        else if(p==1 && v==1)
            sum++;
        else if(v==1 && t==1)
            sum++;
        else if(p==1 && t==1)
            sum++;
    }
    cout<<sum<<endl;
    return 0;
}
