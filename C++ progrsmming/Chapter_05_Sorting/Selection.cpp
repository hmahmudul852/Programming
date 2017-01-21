#include<iostream>

using namespace std;

int main()
{
    int ar[]={4,8,1,9,5,6,3,7,10,2};
    int si=10,temp;
    for(int i=0;i<si;i++)
    {
        int min=i;
        for(int j=i+1;j<si;j++)
        {
            if(ar[min]>ar[j])
                min=j;
        }
        int temp;
        temp=ar[min];
        ar[min]=ar[i];
        ar[i]=temp;
    }
    for(int i=0;i<si;i++)
        cout<<ar[i]<<" ";
    return 0;
}

