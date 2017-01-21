#include<bits/stdc++.h>

using namespace std;

stack<int> ar;

int opa(char c)
{
    int pop1,pop2;
    pop1=ar.top();
    ar.pop();
    pop2=ar.top();
    ar.pop();
    if(c=='^')
        return pow(pop2,pop1);
    else if(c=='/')
        return (pop2/pop1);
    else if(c=='*')
        return (pop2*pop1);
    else if(c=='+')
        return (pop2+pop1);
    else if(c=='-')
        return (pop2-pop1);
    else
        return 0;
}

int Po_eva(string st)
{
    for(unsigned int i=0; i<st.length(); i++)
    {
        if(isdigit(st[i]))
            ar.push(st[i]-'0');
        else
            ar.push(opa(st[i]));
    }
    return ar.top();
}

int main()
{
    string st;
    cin>>st;
    int val=Po_eva(st);
    cout<<val;
    return 0;
}
