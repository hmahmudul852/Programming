#include<iostream>

using namespace std;

int main()
{
    int va;
    cout<<"Enter the number of student: ";
    cin>>va;
    int ar[va];
    cout<<"Enter "<<va<<" scores: ";
    for(int i=0;i<va;i++)
        cin>>ar[i];
    int *ad;
    ad=&ar[0];
    while(va--)
        cout<<*ad++<<endl;
    return 0;
}
