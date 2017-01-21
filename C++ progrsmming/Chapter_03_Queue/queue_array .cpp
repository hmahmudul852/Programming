#include<iostream>
#define MAX 5000

using namespace std;

int top=0;
int rear=0;
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
    ar[top]=num;
    top++;
}

 void Pop()
 {
     if(top==rear)
        cout<<"Queue is already empty\n";
     else
        rear++;

 }

 void PrintFull()
 {
     if(top==rear)
        cout<<"Queue is already empty\n";
    else
        for(int i=rear;i<top;i++)
            cout<<ar[i]<<" ";
    cout<<endl;
 }

