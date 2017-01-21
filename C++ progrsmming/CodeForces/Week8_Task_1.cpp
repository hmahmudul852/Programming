#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s[6]={"as","Sheldon", "Leonard", "Penny","Rajesh","Howard"};
    int ans;
    cin>>ans;
    while(1)
    {
        if(ans<=5)
            break;
        ans=(ans/2)-2;
    }
    cout<<s[ans]<<"\n";
    return 0;
}
