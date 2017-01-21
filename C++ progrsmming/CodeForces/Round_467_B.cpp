#include<bits/stdc++.h>

using namespace std;

string tobi(int a)
{
    string binary=bitset<8>(a).to_string();
//    cout<<binary<<endl;
    binary=to_string(stoi(binary));
    return binary;
}

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int ar[m+1];
    for(int i=1;i<=m+1;i++)
        cin>>ar[i];
    int cou=0;
    for(int i=1;i<=m;i++)
    {
        string pl1=tobi(ar[m+1]).substr(0,k);
        string pl2=tobi(ar[i]).substr(0,k);
//        cout<<pl1<<" "<<pl2<<endl;
        if(pl1!=pl2)
            cou++;
    }
    cout<<cou<<endl;
    return 0;
}
