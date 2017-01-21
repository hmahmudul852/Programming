#include<cstdio>
#include<string>
#include<iostream>
using namespace std;

int main()
{
    string one="one",two="two",three="three";
    int line,cou1,cou2,si;
    cin>>line;
    string str;
    while(line--)
    {
        cou1=0;
        cou2=0;
        cin>>str;
        si=str.size();

        if(si==3)
        {
            for(int i=0;i<si;i++)
            {
                if(one[i]==str[i])
                    cou1++;
                else if(two[i]==str[i])
                    cou2++;
            }
            if(cou1>=2)
                printf("1\n");
            else if(cou2>=2)
                printf("2\n");
        }
        else
            printf("3\n");
    }
    return 0;
}
