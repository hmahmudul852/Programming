#include<iostream>

using namespace std;

int main()
{
    int l,a,flag;
    cin>>l;

    if( l%4==0 || l%7==0 || l%44==0 || l%47==0 || l%74==0 || l%77==0 || l%444==0 || l%447==0 || l%474==0 || l%474==0 )
        cout<<"YES";
    else
    {
        while(1)
        {
            a=l%10;
            l=l/10;

            if(a==4 || a==7)
                flag=1;
            else
            {
                flag=0;
                break;
            }

            if(l==0 || l==1)
                break;
        }
        if(flag==1)
            cout<<"YES";
        if(flag==0)
            cout<<"NO";
    }
    return 0;
}
