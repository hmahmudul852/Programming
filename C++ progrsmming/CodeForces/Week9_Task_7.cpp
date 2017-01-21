#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int ar[1000000];
    memset(ar,0,1000000);
    int k1=0,l1=0,m1=0,n1=0;
    for(int i=1;i<=d;i++)
    {
        ar[k1+=k]=1;
        ar[l1+=l]=1;
        ar[m1+=m]=1;
        ar[n1+=n]=1;
    }
    int sum=0;
    for(int i=1;i<=d;i++)
        if(ar[i]==0)
            sum++;
    sum=d-sum;
    cout<<sum<<"\n";
    return 0;
}
