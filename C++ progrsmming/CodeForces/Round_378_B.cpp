#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n=0,suml=0,sumr=0;
    cin>>n;
    int l[n+1],r[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>l[i]>>r[i];
        suml+=l[i];
        sumr+=r[i];
    }
    int in=0,ma=abs(suml-sumr);
    for(int i=1;i<=n;i++)
    {
        int lk,rk,a,lin,rin;
        lk=suml+(r[i]-l[i]);
        rk=sumr+(l[i]-r[i]);
        a=abs(lk-rk);
        if(a>ma)
        {
            ma=a;
            in=i;
        }
    }
    cout<<in<<endl;
    return 0;
}
