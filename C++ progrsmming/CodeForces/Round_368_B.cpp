#include<bits/stdc++.h>
#define MAX 100000

using namespace std;

struct node
{
    int data;
    node* next;
};
node* lis[MAX];
long long ar[MAX]={0},shop[MAX]={0};
void Insert(node* temp,int num)
{

    node* newnode=new node;
    newnode->data=num;
    newnode->next=NULL;

    while(temp->next!=NULL)
        temp=temp->next;

    temp->next=newnode;
}
int Find(node* temp)
{
    int flag=0;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        if(shop[temp->data]==1)
            flag=1;
    }
    return flag;
}
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++)
    {
        lis[i]=new node;
        lis[i]->data=i;
        lis[i]->next=NULL;
    }
    while(m--)
    {
        long long u,v,l;
        cin>>u>>v>>l;
        Insert(lis[u],v);
        Insert(lis[v],u);
        if(ar[u]==0)
            ar[u]=l;
        else if(ar[u]>0)
            ar[u]=min(ar[u],l);
        if(ar[v]==0)
            ar[v]=l;
        else if(ar[v]>0)
            ar[v]=min(ar[v],l);
    }
    long long pay=0;
    vector<int> fo(k);
    if(k==0)
        cout<<-1<<endl;
    else
    {
        for(int i=0;i<k;i++)
        {
            cin>>fo[i];
            shop[fo[i]]=1;
        }
        for(int i=0;i<k;i++)
        {
            if(Find(fo[i]))
            {
                if(ar[fo[i]]>0 && pay==0)
                    pay=ar[fo[i]];
                else if(ar[fo[i]]>0)
                    pay=min(ar[fo[i]],pay);
            }

        }
        if(pay==0)
           cout<<-1<<endl;
        else if(pay>0)
            cout<<pay<<endl;
    }
    return 0;
}
