#include<iostream>
#include<queue>
#include<vector>
#define MAX 10000
using namespace std;

struct node
{
    int vertex;
    node* next;
};
node* lis[MAX];
int ver;
int ar[MAX],visited[MAX]={0};

queue<int> qu;
vector<int> keep;

void BFS(int v)
{
    int w;
    node *p;
    qu.push(v);
    cout<<v<<endl;
    visited[v]=1;
    while(!qu.empty())
    {
        v=qu.back();
        qu.pop();
        //insert all unvisited,adjacent vertices of v into queue
        for(p=lis[v]; p!=NULL; p=p->next)
        {
            w=p->vertex;
            if(visited[w]==0)
            {
                qu.push(w);
                visited[w]=1;
                cout<<w<<endl;
            }
        }
    }
}

void DFS(int i)
{
    node *p;
    cout<<i<<endl;
    p=lis[i];
    visited[i]=1;
    while(p!=NULL)
    {
        i=p->vertex;
        if(!visited[i])
            DFS(i);
        p=p->next;
    }
}

void Insert(node* temp,int num)
{

    node* newnode=new node;
    newnode->vertex=num;
    newnode->next=NULL;

    while(temp->next!=NULL)
        temp=temp->next;

    temp->next=newnode;
}

void PrintFull(node* temp)
{
    cout<<temp->vertex<<" is connected with: ";
    while(temp->next!=NULL)
    {
        temp=temp->next;
        cout<<temp->vertex<<" ";
    }
    cout<<endl;
}

int main()
{
    cout<<"How many vertices: ";
    cin>>ver;

    cout<<"Input ur vertex values: ";
    for(int i=1;i<=ver;i++)
    {
        cin>>ar[i];
        lis[i]=new node;
        lis[i]->vertex=ar[i];
        lis[i]->next=NULL;
    }
    cout<<"If ur ans is 'YES' press '1' and if 'NO' press '0'\n";
    for(int i=1;i<=ver;i++)
    {
        for(int j=i+1;j<=ver;j++)
        {
            int a;
            cout<<"Is "<<ar[i]<<" and "<<ar[j]<<" are connected? : ";
            cin>>a;
            if(a==1)
            {
                Insert(lis[i],ar[j]);
                Insert(lis[j],ar[i]);
            }
        }
    }
    int x;
    cout<<"Enter the node u want to start from: ";
    cin>>x;
    DFS(x);
//    BFS(x);
//    for(int i=0;i<keep.size();i++)
//        cout<<keep[i]<<" ";
//    cout<<endl;
//    for(int i=0;i<ver;i++)
//        PrintFull(lis[i]);
    return 0;
}
