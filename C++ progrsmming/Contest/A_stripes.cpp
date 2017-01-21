#include<bits/stdc++.h>

using namespace std;

#define MAX 100005
int CSArray[MAX];

void CumulativeSum(int arr[], int Size)
{
    CSArray[0]=arr[0];
    for(int i=1;i<Size;i++)
        CSArray[i]=CSArray[i-1]+arr[i];
}

int SumRange(int Start, int End)
{
    int result;
    if(Start<=End)
         result=CSArray[End]-CSArray[Start-1];

    return result;
}
int main()
{
    ios::sync_with_stdio(false);

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    CumulativeSum(arr,n);
    int keep=0;

    for(int i=0;i<n;i++)
    {
        if(SumRange(0,i)==SumRange(i+1,n))
            keep++;
    }
    keep--;
    if(keep<0)
        keep=0;
    cout<<keep<<endl;
    return 0;
}
