#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    vector<int> ar(3),arr;
    cin>>n>>ar[0]>>ar[1]>>ar[2];
    sort(ar.begin(),ar.end());
    int a=ar[0],b=ar[1],c=ar[2];
    if(n%(a+b+c)==0)
        arr.push_back((n/(a+b+c))*3);
    if(n%(a+b)==0)
        arr.push_back((n/(a+b))*2);
    if(n%(a+c)==0)
        arr.push_back((n/(a+c))*2);
    if(n%(b+c)==0)
        arr.push_back((n/(b+c))*2);
    if(n%a==0)
        arr.push_back(n/a);
    if(n%b==0)
        arr.push_back(n/b);
    if(n%c==0)
        arr.push_back(n/c);
    sort(arr.rbegin(),arr.rend());
    cout<<arr[0]<<endl;



    return 0;
}

