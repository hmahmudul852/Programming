#include<iostream>
#include<string>

using namespace std;

int main()
{
    int line,sum=0;
    cin>>line;
    getchar();
    string st;
    while(line--)
    {
        getline(cin,st);
        if(st[1]=='+')
            sum++;
        else if(st[1]=='-')
            sum--;
    }
    cout<<sum<<"\n";
    return 0;
}
