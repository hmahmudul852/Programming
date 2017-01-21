#include<bits/stdc++.h>

using namespace std;

int Lcm(int a,int b)
{
    for(int i=1;;i++)
        if(i%a==0 && i%b==0)
            return i;
}

int main()
{
    cout<<Lcm(24,30);
    return 0;
}
