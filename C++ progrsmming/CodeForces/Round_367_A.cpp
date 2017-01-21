#include<bits/stdc++.h>

using namespace std;

int main()
{
    double a,b,mi=2148374637.00;
    cin>>a>>b;
    int n;
    cin>>n;
    while(n--)
    {
        double x,y,v,va;
        cin>>x>>y>>v;
        va=sqrt(pow(a-x,2)+pow(b-y,2))/v;
        mi=min(mi,va);
    }
    printf("%.20lf\n",mi);
}
