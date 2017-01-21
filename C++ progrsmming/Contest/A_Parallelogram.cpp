#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,cs=0;
    cin>>t;
    while(t--)
    {
        cs++;
        int xa,ya,xb,yb,xc,yc,xd,yd,area;
        cin>>xa>>ya>>xb>>yb>>xc>>yc;
        xd=xc-xb+xa;
        yd=yc-yb+ya;
        area=abs(((xb-xa)*(yc-ya))-((yb-ya)*(xc-xa)));
        cout<<"Case "<<cs<<": "<<xd<<" "<<yd<<" "<<area<<endl;
    }
    return 0;
}
