#include<iostream>
#include<set>

using namespace std;

int main()
{
    int year;
    cin>>year;

    while(1)
    {
        year++;
        int keep=year;
        int d1,d2,d3,d4;
        d1=keep%10;
        keep=keep/10;
        d2=keep%10;
        keep=keep/10;
        d3=keep%10;
        keep=keep/10;
        d4=keep%10;
        set<int> ye;
        ye.insert(d1);
        ye.insert(d2);
        ye.insert(d3);
        ye.insert(d4);
        if(ye.size()==4)
        {
            cout<<year;
            break;
        }

    }
    return 0;
}
