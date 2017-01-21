#include<bits/stdc++.h>
#define M 100000

using namespace std;

int main()
{
    int n,a,keep;
    cin>>n;
    int pos[M],cou[M],minval[M];
    memset(cou,0,M);
    for(int i=0;i<M;i++)
    {
        pos[i]=10000;
        minval[i]=10000;
    }
    set<int> ar;
    set<int>::iterator it;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        ar.insert(a);
        cou[a]++;
        keep=abs(i-pos[a]);
        minval[a]=min(minval[a],keep);
        pos[a]=i;
    }
    int minimum=1000;
    if(n==ar.size())
        cout<<"-1\n";
    else
    {

        for (it=ar.begin(); it!=ar.end(); ++it)
        {
            if(cou[*it]>1)
            {
                minimum=min(minimum,minval[*it]);
            }
        }
        //cout<<*it<<" ";
        cout<<minimum<<endl;
    }
    return 0;
}
