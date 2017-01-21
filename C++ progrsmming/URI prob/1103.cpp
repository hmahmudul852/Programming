#include<bits/stdc++.h>

using namespace std;

int main()
{
    int h1,m1,h2,m2,res;
    while(cin>>h1>>m1>>h2>>m2)
    {
        res=0;
        if(h1==0 && m1==0 && h2==0 && m2==0)
            break;
        res=((h2*60)+m2)-((h1*60)+m1);
        if(res<0)
        {
            res=1440+res;
        }
        cout<<res<<endl;
    }
    return 0;
}
