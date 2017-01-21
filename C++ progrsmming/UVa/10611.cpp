#include<bits/stdc++.h>

using namespace std;


int Binary(vector<int> A,int ele)
{
    int sz=A.size();
    int low=0;
    int high=sz-1;

    while(low<=high)
    {
        int mid=(low+high)/2;
        if(A[mid]==ele)
            return mid;
        else if(A[mid]>ele)
            high=mid-1;
        else if(A[mid]<ele)
            low=mid+1;
    }
    return -1;

}

int main()
{
    int n;
    cin>>n;
    vector<int> an;
    while(n--)
    {
        int a;
        cin>>a;
        an.push_back(a);
    }
    int q;
    cin>>q;
    vector<int> aq;
    while(q--)
    {
        int a;
        cin>>a;
        aq.push_back(a);
    }
    int sz=aq.size();
    for(int i=0;i<sz;i++)
    {
        if(aq[i]==an[0])
            cout<<"X "<<an[1]<<endl;
        else if(aq[i]==an[sz-1])
            cout<<an[sz-2]<<" X\n";
        else if(aq[i]<an[0])
            cout<<"X "<<an[0]<<endl;
        else if(aq[i]>an[sz-1])
            cout<<an[sz-1]<<" X\n";
        else
        {
            int pos=Binary(an,aq[i]);
            if(pos>-1)
                cout<<an[pos-1]<<" "<<an[pos+1]<<endl;
            else if(pos==-1)
            {
                if(Binary(an,aq[i]+1)>-1)
                {
                    int pos2=Binary(an,aq[i]+1);
                    cout<<an[pos2-1]<<" "<<an[pos2]<<endl;
                }
                else if(Binary(an,aq[i]+2)>-1)
                {
                    int pos2=Binary(an,aq[i]+2);
                    cout<<an[pos2-1]<<" "<<an[pos2]<<endl;
                }
            }
        }
    }
    return 0;
}
