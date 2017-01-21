#include<iostream>

using namespace std;

void hanoi(int n,char s,char a,char d)
{
    if(n==1)
    {
       cout<<"Move disk "<<n<<" from tower-"<<s<<" to tower-"<<d<<endl;
    }
    else
    {
        hanoi(n-1,s,d,a);
        cout<<"Move disk "<<n<<" from tower-"<<s<<" to tower-"<<d<<endl;
        hanoi(n-1,a,s,d);
    }
}

int main()
{
    int disk;
    cout<<"Enter the num of discs: ";
    cin>>disk;
    cout<<"A- source tower.\n";
    cout<<"B- auxiliary tower.\n";
    cout<<"C- destination tower.\n";
    hanoi(disk,'A','B','C');
    return 0;
}
