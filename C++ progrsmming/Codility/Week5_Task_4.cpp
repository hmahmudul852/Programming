#include<cstdio>
#include<string>
#include<iostream>
#include<algorithm>
#include<cctype>

using namespace std;

int main()
{
    string str;
    cin>>str;

    transform(str.begin(),str.end(),str.begin(),(int(*)(int))tolower);

    int si=str.size();

    string str1;
    for(int i=0;i<si;i++)
    {
        if(str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U' && str[i]!='Y' && str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!='y')
        {
            str1.push_back(str[i]);
        }
    }

    si=str1.size();
    string str2;
    for(int i=0;i<si;i++)
    {
        str2.push_back('.');
        str2.push_back(str1[i]);
    }

    cout<<str2;
    return 0;
}
