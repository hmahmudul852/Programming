#include<bits/stdc++.h>

using namespace std;

int main()
{
    int city,live,criminal=0;
    vector<int> cri;
    cin>>city>>live;
    live=live-1;
    int a,b;
    b=city;
    city=city-1;
    while(b--)
    {
        cin>>a;
        cri.push_back(a);
    }
    int j=1;
    for(int i=0;i<city;i++)
    {
        if(cri[live]==1)
            criminal++;
        if(cri[live-j]==1 && cri[live+j]==1)
            criminal++;
        if((live-j)<0 && (live+j)<=city)
        {
            if(cri[live+j]==1)
                criminal++;
        }
    }
    cout<<criminal<<endl;
    return 0;
}
