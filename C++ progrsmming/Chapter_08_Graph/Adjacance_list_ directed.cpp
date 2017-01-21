#include<iostream>

using namespace std;

struct node
{
    int data;
    node* next;
};

void Insert(node* temp,int num)
{

    node* newnode=new node;
    newnode->data=num;
    newnode->next=NULL;

    while(temp->next!=NULL)
        temp=temp->next;

    temp->next=newnode;
}

void PrintFull(node* temp)
{
    cout<<temp->data<<" is connected with: ";
    while(temp->next!=NULL)
    {
        temp=temp->next;
        cout<<temp->data<<" ";
    }
    cout<<endl;
}

int main()
{
    int ver;
    cout<<"How many vertices: ";
    cin>>ver;
    int ar[ver];
    node* lis[ver];

    cout<<"Input ur vertex values: ";
    for(int i=0;i<ver;i++)
    {
        cin>>ar[i];
        lis[i]=new node;
        lis[i]->data=ar[i];
        lis[i]->next=NULL;
    }
    cout<<"If ur ans is 'YES' press '1' and if 'NO' press '0'\n";
    for(int i=0;i<ver;i++)
    {
        for(int j=0;j<ver;j++)
        {
            if(ar[i]!=ar[j])
            {
                int a;
                cout<<"Is "<<ar[i]<<" and "<<ar[j]<<" are connected? : ";
                cin>>a;
                if(a==1)
                    Insert(lis[i],ar[j]);
            }
        }
    }
    for(int i=0;i<ver;i++)
        PrintFull(lis[i]);
    return 0;
}

