#include<string>
#include<iostream>
#include<cctype>

using namespace std;

int main()
{
    string st;
    getline(cin,st);
    if(st[0]>='A' && st[0]<='Z')
        cout<<st<<"\n";
    else
    {
        st[0]=toupper(st[0]);
        cout<<st<<"\n";
    }
    return 0;
}
