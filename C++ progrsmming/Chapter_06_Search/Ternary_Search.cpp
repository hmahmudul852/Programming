#include<iostream>

using namespace std;

int Ternary(int ar[],int f,int l,int ele)
{
    if(l>=f)
    {
        int mid1=f+(l-f)/3;
        int mid2=mid1+(l-f)/3;

        if(ar[mid1]==ele)
            return mid1;
        if(ar[mid2]==ele)
            return mid2;
        if(ar[mid1]>ele)
            return Ternary(ar,f,mid1-1,ele);
        if(ar[mid2]<ele)
            return Ternary(ar,mid2+1,l,ele);

        return Ternary(ar,mid1+1,mid2-1,ele);
    }

    return -1;
}
int main()
{
    int ar[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,227,229,233,239,241,251,257,263,269,271,277,281};
    int s=sizeof(ar)/sizeof(int);
//    cout<<s<<endl;
    cout<<Ternary(ar,0,s-1,163);
    return 0;
}


