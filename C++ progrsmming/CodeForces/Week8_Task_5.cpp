#include<iostream>
#include<string>

using namespace std;

int main()
{
    int a,j=0;
    cin>>a;
    getchar();
    string st;
    getline(cin,st);
    int cou=0;
    for(int i=0;i<st.length();i++)
    {
        if(st[i]==st[i+1])
            cou++;
    }
    cout<<cou<<"\n";

    return 0;
}

