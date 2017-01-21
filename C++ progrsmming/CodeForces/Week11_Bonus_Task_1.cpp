#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,sum=0,b;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        cin>>b;
        a.push_back(b);
        sum+=a[i];
    }
    int half=sum/2,cou=0,sum2=0;
    sort(a.rbegin(),a.rend());
    for(int i=0;i<n;i++)
    {
        sum2+=a[i];
        cou++;
        if(sum2>half)
            break;
    }
    cout<<cou<<endl;

    return 0;
}
