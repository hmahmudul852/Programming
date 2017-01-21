#include<bits/stdc++.h>
#define MAX 10005

using namespace std;

int an[MAX],am[MAX];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,cou=0;
        cin>>n>>m;

        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            an[a]++;
        }
        for(int i=0;i<m;i++)
        {
            int a;
            cin>>a;
            am[a]++;
        }

        for(int i=1;i<=10000;i++)
        {
            if(an[i]!=0 || am[i]!=0)
            {
                cou+=abs(an[i]-am[i]);
            }
        }
        cout<<cou<<endl;
    }
    return 0;
}
