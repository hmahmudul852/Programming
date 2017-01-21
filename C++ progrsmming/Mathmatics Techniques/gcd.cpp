#include<bits/stdc++.h>

using namespace std;

int Gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        Gcd(b,a%b);
}

int main()
{
    //cout<<Gcd(540,360)<<endl;
    cout<< __gcd(11,14)<<endl;
}
