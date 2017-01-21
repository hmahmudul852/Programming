#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    int mi=101,ma=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]>ma)
            ma=ar[i];
        if(ar[i]<mi)
            mi=ar[i];
    }

    int sum=mi+ma;
    int l,h,inl,inh;
    for(int i=0;i<n;i++)
    {
        inl=i;
        l=ar[inl];
        ar[inl]=101;
        for(int j=i+1;j<n;j++)
        {
            if(l+ar[j]==sum)
            {
                inh=j;
                h=ar[inh];
                ar[inh]=101;
                if(h<l)
                    cout<<inh+1<<" "<<inl+1<<endl;
                else if(l<h)
                    cout<<inl+1<<" "<<inh+1<<endl;
                else if(l==h)
                    cout<<inl+1<<" "<<inh+1<<endl;
                break;
            }
        }
    }
    return 0;
}
