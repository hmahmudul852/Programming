#include<bits/stdc++.h>

using namespace std;

int Search(vector<int> A,int sz,int ele)
{
    int low=0;
    int high=sz;

    while(low<=high)
    {
        int mid=(low+high)/2;

        if(A[low]==ele)
            return low;
        else if(A[0]>ele)
            return -1;
        else if(A[sz-1]<=ele)
            return high-1;
        else if(A[mid]==ele)
            return mid;
        else if(A[mid]>ele)
            high=mid-1;
        else if(A[mid]<ele)
            low=mid+1;
        else if(A[mid]<ele || A[mid+1]>ele)
            return mid;
        else if(A[mid]>ele || A[mid-1]<=ele)
            return mid-1;
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int> shop;
    while(n--)
    {
        int a;
        cin>>a;
        shop.push_back(a);
    }
    sort(shop.begin(),shop.end());
    int q,val;
    cin>>q;
    while(q--)
    {
        int a;
        cin>>a;
        val=Search(shop,shop.size(),a);
        cout<<val+1<<endl;
    }
    return 0;
}
