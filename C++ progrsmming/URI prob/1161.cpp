#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> ar;
    int a;
    while(cin>>a)
    {
        ar.push_back(a);
    }

    for(int i=0;i<ar.size();i++)
    {
        if(ar[i]==42)
            break;
        cout<<ar[i]<<endl;
    }
    return 0;
}
