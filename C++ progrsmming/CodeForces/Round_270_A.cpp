#include<bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin>>n;
    int a,b,ma,mi;
    a=n/2;
    b=n-a;
    if(a%2==1 && b%2==1)
    {
        ma=max(a,b);
        mi=min(a,b);
        a=ma--;
        b=mi++;
    }
    else if(a%2==0 && b%2==1)
    {
        a+=3;
        b-=3;
    }
    else if(b%2==0 && a%2==1)
    {
        b+=3;
        a-=3;
    }
    cout<<a<<" "<<b<<endl;
    return 0;
}
