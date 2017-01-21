#include<bits/stdc++.h>

using namespace std;

int co(char a)
{
    if(a=='^')
        return 1;
    else if(a=='*' || a=='/')
        return 2;
    else if(a=='+' || a=='-')
        return 3;
}

int main()
{
    string st;
    cin>>st;
    stack<char> op;
    string ar;
    for(int i=0; i<st.length(); i++)
    {
        if(isalnum(st[i]))
            ar.push_back(st[i]);
        else
        {
            int opa=co(st[i]);
            if(op.empty())
                op.push(st[i]);
            else if(st[i]=='(')
                op.push(st[i]);
            else if(st[i]==')')
            {
                while(!op.empty() && op.top()!='(')
                {
                    ar.push_back(op.top());
                    op.pop();
                }
                if (!op.empty())
                    op.pop();
            }
            else
            {
                if (op.empty())
                    op.push(st[i]);
                else
                {
                    while (!op.empty() && op.top() != '(' && opa >= co(op.top()))
                    {
                        ar.push_back(op.top());
                        op.pop();

                    }
                    op.push(st[i]);
                }
            }
        }
    }
    while(!op.empty())
    {
        ar.push_back(op.top());
        op.pop();
    }
    cout<<ar<<endl;
    return 0;
}

