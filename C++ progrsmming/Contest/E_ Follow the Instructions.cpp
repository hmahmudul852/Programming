#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,cs=1;
    cin>>t;
    while(t--)
    {
        cout<<"Case "<<cs<<':'<<endl;
        cs++;
        int n,m;
        cin>>n>>m;
        list<int> ls;
        while(m--)
        {
            string s;
            int a;
            cin>>s;
            if(s=="pushLeft" || s=="pushRight")
                cin>>a;
            if(s=="pushLeft")
            {
                if(ls.size()==n)
                    cout<<"The queue is full"<<endl;
                else
                {
                    cout<<"Pushed in left: "<<a<<endl;
                    ls.push_front(a);
                }
            }
            else if(s=="pushRight")
            {
                if(ls.size()==n)
                    cout<<"The queue is full"<<endl;
                else
                {
                    cout<<"Pushed in right: "<<a<<endl;
                    ls.push_back(a);
                }
            }
            else if(s=="popLeft")
            {
                if(ls.empty())
                    cout<<"The queue is empty"<<endl;
                else
                {
                    cout<<"Popped from left: "<<ls.front()<<endl;
                    ls.pop_front();
                }
            }
            else if(s=="popRight")
            {
                if(ls.empty())
                    cout<<"The queue is empty"<<endl;
                else
                {
                    cout<<"Popped from right: "<<ls.back()<<endl;
                    ls.pop_back();
                }
            }
        }

    }
}
