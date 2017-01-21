#include<bits/stdc++.h>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("aaa.txt", "r", stdin);
    #endif
    int n,ma=0,cou=0,flag=0,fla=0;
    string s,a,b,c;
    cin>>n>>s;
    int i=0;
    while(i<=n)
    {
        if(s[i]=='(')
        {
            if(fla>0)
            {
                ma=max(fla,ma);
                fla=0;
            }
            while(s[i]!=')')
            {
                if(isalpha(s[i])!=0)
                    flag++;
                else
                {
                    if(flag>0)
                    {
                        cou++;
                        flag=0;
                    }
                }
                i++;
            }
            if(flag>0)
            {
                cou++;
                flag=0;
            }
        }
        else
        {

            if(isalpha(s[i])!=0)
                fla++;
            else
            {
                if(fla>0)
                {
                    ma=max(fla,ma);
                    fla=0;
                }
            }
        }
        i++;
    }
    cout<<ma<<" "<<cou<<endl;
    return 0;
}
