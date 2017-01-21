#include<iostream>

using namespace std;

int main()
{
    int ar[]={4,8,1,9,5,6,3,7,10,2};
    int si=10,temp;
    for(int i=0;i<si-1;i++)
    {
        for(int j=0;j<si-1;j++)
        {
            if(ar[j]>ar[j+1])
            {
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }
    for(int i=0;i<si;i++)
        cout<<ar[i]<<" ";
    return 0;
}
