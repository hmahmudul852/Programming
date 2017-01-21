#include<bits/stdc++.h>

using namespace std;

int main()
{
    long double m1,m2,m3;
    while(cin>>m1>>m2>>m3)
    {
        long double s=(m1+m2+m3)/2.0;
        long double a=(4.0*sqrt(s*(s-m1)*(s-m2)*(s-m3)))/3;

        if(a>0)
            printf("%.3llf\n",a);
        else
            printf("-1.000\n");
    }
    return 0;
}
