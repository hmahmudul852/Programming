#include<cstdio>
#include<string>
#include<iostream>
using namespace std;

int main()
{
    int table[10]={6,2,5,5,4,5,6,3,7,6};
    int line;
    scanf("%d",&line);
    getchar();
    string st;
    while(line--)
    {
        int ans=0;
        cin>>st;
        for(int i=0;i<st.size();i++)
        {
            ans+=table[st[i]-'0'];
        }
        printf("%d leds\n",ans);
    }
    return 0;
}
