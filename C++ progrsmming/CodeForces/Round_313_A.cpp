#include<bits/stdc++.h>

using namespace std;

int main()
{
    long n;
    cin>>n;
    if(n>=0)
        cout<<n<<endl;
    else
    {
        string s=to_string(n);
        if(s.length()==2)
            cout<<0<<endl;
        else
        {
            int nl=n/10,nlb;
            int tl,tlb,t1,mi;
            tl=n%10;
            tlb=(n/10)%10;
            t1=n/10-tlb;
            nlb=t1+tl;
            mi=max(nl,nlb);
            cout<<mi<<endl;
        }

    }
    return 0;
}
