#include<bits/stdc++.h>

using namespace std;

int Binary(vector<int> A,int ele)
{
    int sz=A.size();
    int low=0;
    int high=sz-1;
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;

        if(A[mid]==ele)
            return mid;
        else if(A[mid]>ele || (mid > 0 && A[mid - 1] == ele))
            high=mid-1;
        else if(A[mid]<ele)
            low=mid+1;
    }
    if (A[mid] == ele)
        return mid;
    return -1;

}

int main()
{
    int n,q,c=1;
    while(cin>>n>>q && n && q)
    {
        vector<int> ar;
        while(n--)
        {
            int a;
            cin>>a;
            ar.push_back(a);
        }
        sort(ar.begin(),ar.end());
        cout<<"CASE# "<<c++<<":"<<endl;
        while(q--)
        {
            int a;
            cin>>a;
            int pos=Binary(ar,a);
            if(pos>=0)
                cout<<ar[pos]<<" found at "<<pos+1<<endl;
            else
                cout<<a<<" not found"<<endl;
        }
    }
    return 0;
}
