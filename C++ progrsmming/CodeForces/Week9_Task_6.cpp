#include<iostream>
#include<string>

using namespace std;

int main()
{
    string st,he="hello";
    getline(cin,st);
    int flag=0;
    for(int i=0,j=0;i<st.length();i++)
    {
        if(he[j]==st[i])
        j++;
        if(j==5)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
