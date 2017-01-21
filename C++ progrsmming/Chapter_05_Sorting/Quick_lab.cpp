#include<iostream>

using namespace std;

void Quick(int *ar,int f,int l)
{
    if(l>f)
    {
        int i=f+1;
        int j=l;
        int temp;
        while(j>=i)
        {
            while(ar[i]<ar[f])i++;
            while(ar[j]>ar[f])j--;
            if(j>=i)
            {
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
                i++;
                j--;
            }
        }
        temp=ar[f];
        ar[f]=ar[j];
        ar[j]=temp;
        Quick(ar,f,j-1);
        Quick(ar,j+1,l);
    }
}

int main()
{
    int ar[]={3, 44, 38, 5, 47, 15, 36, 26, 27, 2, 46, 4, 19, 50, 48};
    int si=15;
    Quick(ar,0,si-1);
    for(int i=0;i<si;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}
