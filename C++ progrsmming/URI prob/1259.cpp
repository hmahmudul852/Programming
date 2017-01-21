#include<cstdio>
#include <algorithm>    // std::sort
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int line;
    scanf("%d",&line);
    vector<int>keep;
    vector<int>even;
    vector<int>odd;
    int a;
    while(line--)
    {
        scanf("%d",&a);
        keep.push_back(a);
    }
    int len=keep.size();
    sort (keep.begin(),keep.begin()+len);
    for(int i=0;i<keep.size();i++)
    {
        if(keep[i]%2==0)
            even.push_back(keep[i]);
        else
            odd.push_back(keep[i]);
    }
    for(int i=0;i<even.size();i++)
        printf("%d\n",even[i]);
    for(int i=odd.size()-1;i>=0;i--)
        printf("%d\n",odd[i]);
    return 0;
}
