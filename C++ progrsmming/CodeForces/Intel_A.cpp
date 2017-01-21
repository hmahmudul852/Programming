#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    string s;
    cin>>s;
    string n1,n2,n3,n4,n5,n6;
    n1=s[0];
    n2=s[1];
    n3=s[3];
    n4=s[4];
    n5 = s.substr(0,2);
    n6 = s.substr(3,2);
    int v1 = atoi(n1.c_str());
    int v2 = atoi(n2.c_str());
    int v3 = atoi(n3.c_str());
    int v4 = atoi(n4.c_str());
    int v5 = atoi(n5.c_str());
    int v6 = atoi(n6.c_str());
    if(t==24)
    {
        if(v5>=0 && v5<=23)
            cout<<n5;
        else if((v2>=0 && v2<=9))
            cout<<0<<v2;
        else if((v1>=0 && v1<=2))
            cout<<v1<<0;
    }
    else if(t==12)
    {
        if(v5>=1 && v5<=12)
            cout<<n5;
        else if(v5==0)
            cout<<0<<1;
        else if((v2>=1 && v2<=9))
            cout<<0<<v2;
        else if((v1>=0 && v1<=1))
            cout<<v1<<0;
        else
            cout<<1<<0;
    }
    cout<<":";
    if(v6>=0 && v6<=59)
        cout<<n6<<endl;
    else if((v4>=0 && v4<=9))
        cout<<0<<v4<<endl;
    else if((v3>=0 && v3<=5))
        cout<<v3<<0<<endl;
    return 0;
}
