#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    double v=.1378,l=0;
    l=pow(v,n);
    std::ostringstream strs;
    strs << l;
    std::string str = strs.str();
    cout<<str[str.length()-1]<<endl;
    return 0;
}
