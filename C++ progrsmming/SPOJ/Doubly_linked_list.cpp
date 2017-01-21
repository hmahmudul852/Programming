#include<iostream>

using namespace std;

struct node
{
    int data;
    node* prev;
    node* next;
};

node* head;
void InsertFront(int num);
void PrintFull();

int main()
{
    head=NULL;
    for(int i=1;i<=10;i++)
        InsertFront(i);
    PrintFull();
    return 0;
}

void InsertFront(int num)
{
    node* newnode=new node;
    newnode->data=num;
    newnode->prev=NULL;
    newnode->next=NULL;

    if(head==NULL)
        head=newnode;
    else
    {
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }
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
