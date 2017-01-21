#include<bits/stdc++.h>
#include<cstring>

using namespace std;

int main()
{
    char na[101];
    gets(na);
    int si=strlen(na);
    set<char> name;
    name.insert (na,na+si);
    if(name.size()%2==0)
        cout<<"CHAT WITH HER!"<<"\n";
    else
        cout<<"IGNORE HIM!"<<"\n";
    return 0;
}
