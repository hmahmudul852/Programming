#include<bits/stdc++.h>
#include<cctype>

using namespace std;

int main()
{
    int line;
    cin>>line;
    getchar();
    while(line--)
    {
        string st;
        getline(cin,st);
        int isi=st.length();
        float si=isi;
        int half1,half2;
        half1=ceil(si/2.00);
        half2=(int)si-half1;
        int i=0;
        while(half1--)
        {
            if(isalpha(st[i]!=0))
                st[i]=st[i]+2;
            i++;
        }
        while(half2--)
        {
            if(isalpha(st[i]!=0))
                st[i]=st[i]+3;
            i++;
        }
        reverse(st.begin(),st.end());
        cout<<st<<endl;
    }
    return 0;
}
