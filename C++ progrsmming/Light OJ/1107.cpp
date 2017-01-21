#include<bits/stdc++.h>

using namespace std;

int main()
{
    int line,cas=0;
    cin>>line;
    while(line--)
    {
        cout<<"Case "<<++cas<<":"<<endl;
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int cow;
        cin>>cow;
        while(cow--)
        {
            int x,y;
            cin>>x>>y;
            if(x1<=x && x2>=x && y1<=y && y2>=y)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
    return 0;
}
