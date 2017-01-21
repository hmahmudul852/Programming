#include<bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node* next;
};

struct Pair
{
    bool first;
    int second;
};

node* head;
void InsertEnd(int num);//Connects a node at the back of a linked list
void InsertFront(int num);//Connects a node at the head of a linked list
void InsertNth(int pos,int num);//Connects a node at the given position of a linked list
void InsertMid(int num);//Insert a element in the sorted list
void DeleteFront();//Deletes the head of a linked list
void DeleteEnd();//Deletes the last node of a linked list
void DeleteNth(int pos);//Deletes a node at a given position of a linked list
void DeleteElement(int num);//Deletes all the same element of a linked list given by the user
void PrintFull();//Prints the full linked list
void PrintNth(int untill);//Prints untill Nth position of a link list
void PrintAt(int pos);//Prints the given position of a linked list
Pair Search(int num);//Search an element in a linked list and returns the position of the element
int ListSize();//Returns the size of a linked list
void Swap(int pos1,int pos2);//Swaps 2 element of given position
void Reverse();//Reverse the full linked list
void Unique();//Deletes all the same element of a linked list

int main()
{
    head=NULL;
//    for(int i=1;i<=10;i++)
//        InsertEnd(i);
    InsertEnd(2);
    InsertEnd(4);
    InsertEnd(6);
    InsertEnd(7);
    InsertEnd(10);
    InsertEnd(15);

    PrintFull();

//    for(int i=1;i<=5;i++)
//        InsertFront(i);

    InsertMid(8);
    PrintFull();

//    PrintNth(3);

//    PrintAt(4);

//    InsertNth(6,4);
//    PrintFull();

//    Pair res=Search(5);
//    cout<<res.first<<" "<<res.second<<endl;

//    DeleteFront();
//    PrintFull();

//    DeleteEnd();
//    PrintFull();

//    DeleteNth(2);
//    PrintFull();

//    DeleteElement(5);
//    PrintFull();

//    cout<<"Size of the List is "<<ListSize()<<endl;

//    Swap(2,5);
//    Swap(1,6);
//    Swap(3,7);
//    PrintFull();

//    Reverse();
//    PrintFull();

//    Unique();
//    PrintFull();

    return 0;
}


void InsertEnd(int num)
{
    node* newnode=new node;
    newnode->data=num;
    newnode->next=NULL;

    node* temp=head;

    if(head==NULL)
        head=newnode;
    else
    {
        while(temp->next!=NULL)
            temp=temp->next;

        temp->next=newnode;
    }
}

void InsertFront(int num)
{

    node* newnode=new node;
    newnode->data=num;
    newnode->next=NULL;

    if(head==NULL)
        head=newnode;
    else
    {
        newnode->next=head;
        head=newnode;
    }
}

void InsertNth(int num,int pos)
{
    pos=pos-1;
    int pos2=pos-1;
    node* newnode=new node;
    newnode->data=num;
    newnode->next=NULL;

    node* temp=head;
    node* temp2=head;
    while(pos2--)
        temp2=temp2->next;
    while(pos--)
    {
        temp=temp->next;
        if(pos==0)
        {
            temp2->next=newnode;
            newnode->next=temp;
        }
    }

}

void InsertMid(int num)
{
    node* newnode=new node;
    newnode->data=num;
    newnode->next=NULL;

    node* temp=head;
    node* temp2=head;

    while(temp->next!=NULL)
    {
        temp=temp->next;
        if(temp->data > newnode->data)
        {
            newnode->next=temp;
            temp2->next=newnode;
            break;
        }
        temp2=temp2->next;
    }
}

void DeleteFront()
{
    node* temp2=head;
    head=head->next;
    delete temp2;
}

void DeleteEnd()
{
    node* endnode=head;
    node* previous=head;
    while(endnode->next!=NULL)
    {
        endnode=endnode->next;
        if(endnode->next!=NULL)
            previous=previous->next;
    }
    previous->next=NULL;
    delete endnode;
}

void DeleteNth(int pos)
{

    node* temp=head;
    node* temp2;
    if(pos==1)
        DeleteFront();
    else
    {
        while(--pos)
        {
            temp2=temp;
            temp=temp->next;
        }
        temp2->next=temp->next;
    }
    delete temp;
}

void DeleteElement(int num)
{
    node* temp=head;
    node* temp2;

    while(temp!=NULL)
    {
        if(head->data==num)
        {
            DeleteFront();
            break;
        }
        else if(temp->next==NULL && temp->data==num)
        {
            DeleteEnd();
            break;
        }
        else
        {
            temp2=temp;
            temp=temp->next;
            if(temp->data==num)
            {
                temp2->next=temp->next;
                break;
            }
        }
    }
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

void PrintNth(int untill)
{
    node* temp=head;

    while(untill--)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void PrintAt(int pos)
{
    pos=pos-1;
    node* temp=head;

    while(pos--)
        temp=temp->next;
    cout<<temp->data<<endl;
}

Pair Search(int num)
{
    Pair result;
    node* temp=head;
    int flag=0,pos=1;

    while(temp!=NULL)
    {
        if(temp->data==num)
        {
            flag=1;
            break;
        }

        pos++;
        temp=temp->next;

    }
    if(flag==1)
    {
        result.first=true;
        result.second=pos;
    }

    if(flag==0)
    {
        result.first=false;
        result.second=-1;
    }

    return result;
}

int ListSize()
{
    node* temp=head;
    int cou=1;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        cou++;
    }

    return cou;
}

void Swap(int pos1,int pos2)
{
    pos1=pos1-1;
    pos2=pos2-1;
    node* temp=head;
    node* temp2=head;

    while(pos1--)
        temp=temp->next;
    while(pos2--)
        temp2=temp2->next;

    int keep;
    keep=temp->data;
    temp->data=temp2->data;
    temp2->data=keep;
}

void Reverse()
{
    node* temp=head;
    int cou=0,cou1;
    cou=ListSize()+1;
    cou1=cou;
    while(cou--)
    {
        InsertNth(temp->data,cou1);
        temp=temp->next;
    }
    while(cou1--)
        DeleteFront();
}

void Unique()
{
    node* temp=head;
    node* temp2=head;
    while(temp->next!=NULL)
    {
        temp2=temp->next;
        while(temp2!=NULL)
        {
            if(temp->data==temp2->data)
            {
                DeleteElement(temp2->data);
            }
            temp2=temp2->next;
        }
        temp=temp->next;
    }
}
