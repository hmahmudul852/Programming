#include<bits/stdc++.h>

using namespace std;

int main()
{
    string st;
    cin>>st;
    int e,dot;
    for(int i=st.size()-1;i>0;i--)
    {
        if(st[i]=='e')
        {
            e=i;
            break;
        }
    }
    for(int i=0;i<11;i++)
    {
        if(st[i]=='.')
        {
            dot=i;
            break;
        }
    }
    vector<int> ar;
    for(int i=e+1;i<st.size();i++)
    {
        ar.push_back(st[i]-'0');
    }
//    for(int i=0;i<ar.size();i++)
//        cout<<ar[i];
    int mo;
    if(ar.size()==3)
        mo=(ar[0]*100)+(ar[1]*10)+ar[2];
    if(ar.size()==2)
        mo=(ar[0]*10)+ar[1];
    if(ar.size()==1)
        mo=ar[0];
    int keep=mo,i;
    for(i=0;i<dot;i++)
        cout<<st[i];

    if(mo==0)
        cout<<'.';
    int j=dot+1;
    while(keep--)
    {
        cout<<st[j];
        j++;
    }

    if(st[j+1]=='e')
        cout<<'.';
    for(int i=j;i<e;i++)
        cout<<st[i];
    return 0;
}
