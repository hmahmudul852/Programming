#include<bits/stdc++.h>

using namespace std;

int Lcm(int a,int b)
{
        return (a/__gcd(a,b))*b;
}

int main()
{
    cout<<Lcm(1000000,1000000);
    return 0;
}

