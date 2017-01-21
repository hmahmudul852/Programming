#include<bits/stdc++.h>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("aaa.txt", "r", stdin);
    #endif
    string s1,s2;
    cin>>s1>>s2;
    int a,b;
    if(s1=="saturday")
        a=1;
    else if(s1=="sunday")
        a=2;
    else if(s1=="monday")
        a=3;
    else if(s1=="tuesday")
        a=4;
    else if(s1=="wednesday")
        a=5;
    else if(s1=="thursday")
        a=6;
    else if(s1=="friday")
        a=7;
    if(s2=="saturday")
        b=1;
    else if(s2=="sunday")
        b=2;
    else if(s2=="monday")
        b=3;
    else if(s2=="tuesday")
        b=4;
    else if(s2=="wednesday")
        b=5;
    else if(s2=="thursday")
        b=6;
    else if(s2=="friday")
        b=7;
    int dif=abs(a-b);
    cout<<dif<<endl;
    if(dif==0 || dif==2 ||dif==3)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
