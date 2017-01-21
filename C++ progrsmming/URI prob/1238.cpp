#include<cstdio>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int line;
    scanf("%d",&line);
    getchar();

    while(line--)
    {
        string str1,str2,str;
        cin>>str1>>str2;
        int size1,size2;
        size1=str1.size();
        size2=str2.size();
        int simin=min(str1.size(),str2.size());
        int simax=max(str1.size(),str2.size());
        for(int i=0;i<simin;i++)
        {
            str.push_back(str1[i]);
            str.push_back(str2[i]);
        }
        for(int i=simin;i<simax;i++)
        {
            if(simax==size1)
                str.push_back(str1[i]);
            else if(simax==size2)
                str.push_back(str2[i]);
        }
        cout<<str<<"\n";
    }
    return 0;
}
