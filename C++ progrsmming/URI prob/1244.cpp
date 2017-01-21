#include<cstdio>
#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int,string> i,pair<int,string> j)
{
    if(i.second.length()==j.second.length())
        return i.first<j.first;
    else
        return i.second.length()>j.second.length();
}

int main()
{
    int line;
    cin>>line;
    cin.ignore();
    while(line--)
    {
        string s;
        getline(cin,s);
        istringstream iss(s);
        vector<pair<int,string>>st;
        int i=0;
        while(iss)
        {
            string val;
            iss>>val;
            st.push_back(make_pair(i,val));
            i++;
        }
        sort(st.begin(),st.end(),compare);
        for(int j=0;j<st.size();j++)
        {
            cout<<st[j].second;
            if(j< st.size()-2)
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
