#include <bits/stdc++.h>

using namespace std;

int main()
{
    double y,m,d,p,q,r,s,t;
    int l;
    cin>>l;
    while(l--)
    {
        cin>>d>>m>>y;

        p=floor((14-m)/12);
        q=y-p;
        r=q+floor(q/4)-floor(q/100)+floor(q/400);
        s = m+(12*p)-2;
        t=(int)(d+r+(floor((31*s)/12)))%7;
        if(t==0)
            printf("Sunday\n");
        if(t==1)
            printf("Monday\n");
        if(t==2)
            printf("Tuesday\n");
        if(t==3)
            printf("Wednesday\n");
        if(t==4)
            printf("Thursday\n");
        if(t==5)
            printf("Friday\n");
        if(t==6)
            printf("Saturday\n");
    }
    return 0;
}
