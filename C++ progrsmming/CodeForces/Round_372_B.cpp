#include<bits/stdc++.h>

using namespace std;

int main()
{
    string st;
    cin>>st;
    int ar[100]={0},qu=0;
    for(int i=0;i<st.length();i++)
    {
        ar[st[i]]++;
        if(st[i]=='?')
            qu++;
    }
    int al=0,to=0;
    for(int i=65;i<91;i++)
    {
        if(ar[i]>=1)
            al++;
        to+=ar[i];
    }
    int mis=26-al,keep;
    if(qu>=mis)
    {
        int i=90,j=st.length();
        for(i;i>=65;i--)
        {
            if(ar[i]==0)
            {
                while(j>=0)
                {
                    if(st[j]=='?')
                    {
                        st[j]=i;
                        keep=i;
                        break;
                    }
                    else
                        j--;
                }
            }
        }
        while(j>=0)
        {
            if(st[j]=='?')
                st[j]=keep;
            else
                j--;
        }
        cout<<st<<endl;
    }
    else
        cout<<-1<<endl;

//    cout<<al<<endl;
    return 0;
}
