#include<bits/stdc++.h>

using namespace std;

int main()
{
    string st;
	getline(cin,st);
    for(int i=0;i<st.length();i++)
	{
		st[i]=toupper(st[i]);
	}
	cout<<st<<endl;
    return 0;
}
