#include<bits/stdc++.h>

using namespace std;

int Factorial(int a)
{
    if(a==0)
        return 1;
    return a*Factorial(a-1);
}

int main()
{
    cout<<Factorial(5)<<endl;
    return 0;
}
