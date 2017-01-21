#include<iostream>

using namespace std;

struct node
{
    int data;
    node* next;
};

node* head;

void Push(int num);
void Pop();
void PrintFull();

int main()
{
    head=NULL;
    Push(2);
    Push(5);
    Push(8);
    Push(1);
    Push(6);
    PrintFull();
    Pop();
    PrintFull();
    return 0;
}

void Push(int num)
{
    node* newnode=new node;
    newnode->data=num;
    newnode->next=NULL;

    node* temp=head;

    if(head==NULL)
        head=newnode;
    else
    {
        newnode->next=temp;
        head=newnode;
    }
}

void Pop()
{
    node* temp=head;
    node* prev;
    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
    delete temp;
}

void PrintFull()
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

