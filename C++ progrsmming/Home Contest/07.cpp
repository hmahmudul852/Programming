#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long a,sum=1;
    cin>>a;
        if(a<=20)
        {
            sum=1;
            for(int i=1;i<=a;i++)
                sum=sum*i;
        }
        cout<<sum<<endl;

    return 0;
}
