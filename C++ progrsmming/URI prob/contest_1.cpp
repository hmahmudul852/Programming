#include<bits/stdc++.h>

using namespace std;

int main()
{
    int l[4],r[4];
    for(int i=0;i<4;i++)
        cin>>l[i];
    for(int i=0;i<4;i++)
        cin>>r[i];

    int x1,x2,y1,y2;
    x1=max(l[0],r[0]);
    x2=max(l[1],r[1]);
    y1=max(l[2],r[2]);
    y2=max(l[3],r[3]);

    if(x1>=x2 || y1>=y2) cout<<0<<endl;
    else cout<<1<<endl;
}
