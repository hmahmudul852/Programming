#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int m,c,pos=0,pos2=1,pos3;
        vector<int> ar;
        cin>>m>>c;
        while(c--)
        {
            int k;
            cin>>k;
            pos2*=k;
            if(ar.empty()==true)
            {
                for(int j=0;j<k;j++)
                {
                    int a;
                    cin>>a;
                    ar.push_back(a);

                }
            }
            else
            {
                for(int j=0;j<k;j++)
                {
                    int a;
                    cin>>a;
                    for(int i=0;i<pos3;i++)
                    {


                    }
                }
            }
            pos3=k
            pos=pos2;
        }
    }
    return 0;
}
