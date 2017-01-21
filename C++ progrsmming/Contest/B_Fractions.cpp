#include<bits/stdc++.h>

using namespace std;

long long gcd (long long a, long long b)
{
    return b == 0?a:gcd(b, a%b);
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        long long a,b;
        scanf("%lld/%lld",&a,&b);
        long long g=gcd(a,b);
        printf("%lld/%lld\n",a/g,b/g);
    }
    return 0;
}
