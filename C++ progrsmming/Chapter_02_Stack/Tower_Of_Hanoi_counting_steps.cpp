#include<iostream>

using namespace std;

int hanoi(int n,char s,char a,char d)
{
    int steps=0;
    if(n>0)
    {
        steps=hanoi(n-1,s,d,a);
        cout<<"Move disk "<<n<<" from tower-"<<s<<" to tower-"<<d<<endl;
        steps++;
        steps+=hanoi(n-1,a,s,d);
    }
    return steps;
}

int main()
{
    int disk;
    cout<<"Enter the num of discs: ";
    cin>>disk;
    int steps;
    cout<<"A- source tower.\n";
    cout<<"B- auxiliary tower.\n";
    cout<<"C- destination tower.\n";

    steps=hanoi(disk,'A','B','C');
    cout<<steps<<" steps needed to complete the task\n";
    return 0;
}

