#include<iostream>
#define MAX 5000

using namespace std;

int top=-1;
int ar[MAX];

void Push(int num);
void Pop();
void PrintFull();

int main()
{
    for(int i=1;i<6;i++)
        Push(i);
    PrintFull();
    Pop();
    PrintFull();
    return 0;
}

void Push(int num)
{
    top++;
    ar[top]=num;
}

 void Pop()
 {
     if(top==-1)
        cout<<"Stact is already empty\n";
     else
        top--;

 }

 void PrintFull()
 {
     if(top==-1)
        cout<<"Stact is already empty\n";
    else
        for(int i=top;i>=0;i--)
            cout<<ar[i]<<" ";
    cout<<endl;
 }
