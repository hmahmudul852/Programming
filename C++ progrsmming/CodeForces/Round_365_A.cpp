#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,c,cou_m=0,cou_c=0;
    cin>>n;
    while(n--)
    {
        cin>>m>>c;
        if(m>c)
            cou_m++;
        else if(c>m)
            cou_c++;
    }
    if(cou_m>cou_c)
        cout<<"Mishka\n";
    else if(cou_c>cou_m)
        cout<<"Chris\n";
    else if(cou_c==cou_m)
        cout<<"Friendship is magic!^^\n";
    return 0;
}
