#include<bits/stdc++.h>
#include<cstdio>
using namespace std;

int main()
{
    int a;
    while(cin>>a && a)
    {
        if(a<=100)
            printf("f91(%d) = 91\n",a);
        else if(a>=101)
            printf("f91(%d) = %d\n",a,a-10);
    }

    return 0;
}
