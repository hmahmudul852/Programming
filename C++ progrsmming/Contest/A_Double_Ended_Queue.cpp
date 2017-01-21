#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,cs=0;
    cin>>t;
    while(t--)
    {
        stack<string> st;
        int n,m,sz=0;
        cin>>n>>m;
        vector<string> s(m);
        string a;
        for(int i=0;i<m;i++)
        {
            cin>>a;
            if(a.substr(0,4)=="push")
            {
                sz++;
                if(sz>0)
                {
                    s[i].push_back("The queue is full");
                    sz=n;
                }
                else if(a.substr(4,4)=="Left")
                {
                    if(a[10]=='-')
                    {
                        s[i].push_back("Pushed in left: -");
                        s[i].push_back(a.substr(11,a.length()-11));
                    }
                    else
                    {
                        s[i].push_back("Pushed in left: ");
                        s[i].push_back(a.substr(10,a.length()-10));
                    }
                }
                else if(a.substr(4,5)=="Right")
                {
                    if(a[11]=='-')
                    {
                        s[i].push_back("Pushed in right: -");
                        s[i].push_back(a.substr(12,a.length()-12));
                    }
                    else
                    {
                        s[i].push_back("Pushed in right: ");
                        s[i].push_back(a.substr(11,a.length()-11));
                    }
                }
                st.push(a.substr(11,a.length()-11));
            }
            else if(a.substr(0,3)=="pop")
            {
                sz--;
                if(sz<0)
                {
                    s[i].push_back("The queue is empty");
                    sz=n;
                }
                else if(a.substr(3,4)=="Left")
                {
                        s[i].push_back("Popped from left: ");
                        s[i].push_back(st.pop());
                }
                else if(a.substr(3,5)=="Right")
                {
                        s[i].push_back("Popped from right: ");
                        s[i].push_back(st.pop());
                }
            }
        }

        cout<<"Case "<<cs<<":"<<endl;
        for(int i=0;i<m;i++)
        {
            cout<<s[i]<<endl;
        }
    }
}
