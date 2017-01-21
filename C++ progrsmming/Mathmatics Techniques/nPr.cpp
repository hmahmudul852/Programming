#include<bits/stdc++.h>

using namespace std;

int Factorial(int a)
{
    if(a==0)
        return 1;
    return a*Factorial(a-1);
}
int nPr(int n,int r)
{
    return Factorial(n)/Factorial(n-r);
}

int main()
{
    cout<<nPr(5,3)<<endl;
    return 0;
}

