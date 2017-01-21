#include<bits/stdc++.h>

using namespace std;

int expo(int x)
{
    return !(x==0) && !(x & (x-1));
}

int main()
{
    int n;
    cin>>n;
    long long ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];

    int cou=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int sum=ar[i]+ar[j];
            if(expo(sum)==1)
                cou++;
//            cout<<expo(sum)<<" ";
        }
    }
//    cout<<endl;
    cout<<cou<<endl;
    return 0;
}
