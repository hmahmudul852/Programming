#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];

    if(n==1 && ar[0]!=0 && ar[0]!=15)
        cout<<-1<<endl;
    else if(ar[n-1]==0)
        cout<<"UP\n";
    else if(ar[n-1]==15)
        cout<<"DOWN\n";
//  if(ar[n-2]==2 && ar[n-1]==1)
//       cout<<"UP\n";
    else if(ar[n-2]>ar[n-1])
        cout<<"DOWN\n";
    else if(ar[n-2]<ar[n-1])
        cout<<"UP\n";
    return 0;
}
