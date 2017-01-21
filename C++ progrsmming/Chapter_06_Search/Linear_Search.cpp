#include<iostream>

using namespace std;

int Linear_Search(int A[],int fir,int sz,int ele)
{
    if(A[fir]==ele)
        return fir;
    fir++;
    if(fir>sz)
        return -1;
    Linear_Search(A,fir,sz,ele);
}

int main()
{
    int ar[]={2,3,5,139,1,241,251,257,263,269,271,277,281};
    int s=sizeof(ar)/sizeof(int);
    cout<<Linear_Search(ar,0,s,139);
    return 0;
}


