#include<cstdio>
#include<iostream>
#include<string>

using namespace std;

int main()
{
    int line;
    scanf("%d",&line);
    getchar();
    string st;
    int n;
    int c='A';
    while(line--)
    {
        cin>>st;
        scanf("%d",&n);
        for(int i=0;i<st.size();i++)
        {
            if((st[i]-n)<c)
                    st[i]=st[i]+26-n;
            else
                st[i]=st[i]-n;
        }
        cout<<st;
        printf("\n");
    }
    return 0;
}
