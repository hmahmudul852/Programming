#include<bits/stdc++.h>

using namespace std;

void Quick(int *ar,int l,int r)
{
    int i=l,j=r;
    int p=ar[(l+r)/2];
    while(j>=i)
    {
        while(ar[i]<p)i++;
        while(ar[j]>p)j--;
        if(j>=i)
        {
            swap(ar[i],ar[j]);
            i++;
            j--;
        }
    }
    if(l<j)
        Quick(ar,l,j);
    if(i<r)
        Quick(ar,i,r);
}

int main()
{
    int ar[]={3, 44, 38, 5, 47, 15, 36, 26, 27, 2, 46, 4, 19, 50, 48};
    int si=15;
    Quick(ar,0,si-1);
    for(int i=0;i<si;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}
