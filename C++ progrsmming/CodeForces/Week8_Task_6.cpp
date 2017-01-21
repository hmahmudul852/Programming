#include<iostream>
#include<vector>
#include<cctype>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s;
    vector<int> a;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
        if(isdigit(s[i]))
            a.push_back(s[i]-'0');

    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i];
        if(i<a.size()-1)
            cout<<"+";
    }
    cout<<"\n";
    return 0;
}
