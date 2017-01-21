#include<bits/stdc++.h>

using namespace std;

int Factorial(int a)
{
    if(a==0)
        return 1;
    return a*Factorial(a-1);
}
int nCr(int n,int r)
{
    return Factorial(n)/(Factorial(r)*Factorial(n-r));
}

int main()
{
    cout<<nCr(5,3)<<endl;
    return 0;
}


