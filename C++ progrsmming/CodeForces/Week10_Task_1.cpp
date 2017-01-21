#include<bits/stdc++.h>

using namespace std;

int main()
{
    int si,ti;
    cin>>si>>ti;
    getchar();
    string st;
    getline(cin,st);
    while(ti--)
    {
        for(int i=1;i<si;i++)
        {
            if(st[i]=='G' && st[i-1]=='B')
            {
                swap(st[i],st[i-1]);
                i++;
            }
        }
    }
    cout<<st<<endl;
    return 0;
}
