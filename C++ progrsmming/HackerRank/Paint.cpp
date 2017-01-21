#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long w,h,m;
    cin>>w>>h>>m;
    if(w*h<=m)
        cout<<w*h<<endl;
    else if(w*h>m)
    {
        while(w*h>m)
        {
            if(w>=h && w>0)
            {
                if(m%w!=0)
                    w--;
                else
                    h--;
            }

            else if(h>w && h>0)
            {
                if(m%h!=0)
                    h--;
                else
                    w--;
            }

        }
        cout<<w*h<<endl;
    }
    return 0;
}
