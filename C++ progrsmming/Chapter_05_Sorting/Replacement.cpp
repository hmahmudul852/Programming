#include<iostream>

using namespace std;

int main()
{
    int ar[]={4,8,1,9,5,6,3,7,10,2};
    int si=10,temp;
    for(int i=0;i<=si-2;i++)
    {
        for(int j=i+1;j<=si-1;j++)
        {
            if(ar[i]>ar[j])
            {
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }
    for(int i=0;i<si;i++)
        cout<<ar[i]<<" ";

    return 0;
}
