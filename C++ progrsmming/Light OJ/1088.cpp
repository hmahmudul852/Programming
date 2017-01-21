#include<bits/stdc++.h>

using namespace std;

int Binary_Search(vector<int> A,int sz,int x,int y)
{
    int low=0;
    int high=sz;
    int cou=0;

    while(low<=high)
    {
        int mid=(low+high)/2;

        if(A[mid]>=x && A[mid]<=y)
            cou++;
        else if(A[mid]>y)
            high=mid-1;
        else if(A[mid]<x)
            low=mid+1;
    }
    return cou;
}

int main()
{
    int line;
    cin>>line;
    while(line--)
    {
        int n,q;
        cin>>n>>q;
        vector<int> ar;
        int i=n;
        while(i--)
        {
            int a;
            cin>>a;
            ar.push_back(a);
        }
        while(q--)
        {
            int x,y;
            cin>>x>>y;
            int cou=Binary_Search(ar,n,x,y);
            cout<<cou<<endl;
        }
    }
    return 0;
}

