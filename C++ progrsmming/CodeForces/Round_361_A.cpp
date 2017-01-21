#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,flag=0;
    cin>>n;
    string st;
    cin>>st;
    if ((st.find('1') != string::npos) && (st.find('9') != string::npos))
            flag=1;
    if ((st.find('3') != string::npos) && (st.find('7') != string::npos))
            flag=1;
    if ((st.find('2') != string::npos || st.find('1') != string::npos || st.find('3') != string::npos)
        && (st.find('0') != string::npos))
            flag=1;
    if ((st.find('3') != string::npos) && (st.find('4') != string::npos || st.find('1') != string::npos || st.find('7') != string::npos)
         && (st.find('9') != string::npos))
                flag=1;
    if ((st.find('1') != string::npos) && (st.find('6') != string::npos || st.find('3') != string::npos || st.find('9') != string::npos)
         && (st.find('7') != string::npos))
                flag=1;
    if ((st.find('2') != string::npos || st.find('1') != string::npos || st.find('3') != string::npos) && (st.find('7') != string::npos) && (st.find('9') != string::npos))
                flag=1;
    if ((st.find('1') != string::npos) && (st.find('3') != string::npos)
        && (st.find('7') != string::npos || st.find('9') != string::npos))
                flag=1;
    if(flag==1)
        cout<<"YES\n";
    else if(flag==0)
        cout<<"NO\n";
    return 0;
}
