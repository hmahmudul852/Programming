//#include<bits/stdc++.h>
#include<cstdio>
#include<algorithm>
using namespace std;
int solution(int N,int M)
{
    return N/__gcd(N,M);
}

int main()
{
    printf("%d",solution(10,4));
    return 0;
}


