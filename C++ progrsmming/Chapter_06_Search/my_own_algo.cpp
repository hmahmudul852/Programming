#include<iostream>

using namespace std;

int Binary_Search(int A[],int sz,int ele)
{
    int low=0;
    int high=sz;
    int mid=(low+high)/2;

    while(low<=high)
    {
        if(A[mid]==ele)
            return mid;
        else if(A[mid]>ele)
        {
            high=mid;
            mid=(low+high)/2;
//            cout<<low<<" "<<high<<" "<<mid<<endl;
        }
        else if(A[mid]<ele)
        {
            low=mid;
            mid=(low+high)/2;
//            cout<<low<<" "<<high<<" "<<mid<<endl;
        }
    }
    return -1;

}

int main()
{
    int ar[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,227,229,233,239,241,251,257,263,269,271,277,281};
    int s=sizeof(ar)/sizeof(int);
    cout<<s<<endl;
    cout<<Binary_Search(ar,s,163);
    return 0;
}
