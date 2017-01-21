#include<iostream>
#include<algorithm>
#include<string>
#include<cctype>

using namespace std;

int main()
{
    string st,keep,keep1;
    getline(cin,st);
    keep=st;
    for (int i=0; keep[i]; i++)
            keep[i] = toupper(keep[i]);
    keep1=keep;
    keep1[0]=tolower(keep1[0]);

    if(keep1==st)
    {
        for (int i=0; st[i]; i++)
            st[i] = tolower(st[i]);
        st[0]=toupper(st[0]);
        cout<<st<<endl;
    }
    else if(keep==st)
    {
        for (int i=0; st[i]; i++)
            st[i] = tolower(st[i]);
        cout<<st<<endl;
    }
    else
        cout<<st<<endl;
    return 0;
}
