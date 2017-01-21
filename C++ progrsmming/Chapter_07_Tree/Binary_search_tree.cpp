#include<iostream>

using namespace std;

struct node
{
    int data;
    node* right;
    node* left;
};

node* root;
node* Insert(node* root,int num);
void Inorder(node* root);
void Preorder(node* root);
void Postorder(node* root);

int main()
{
    root=NULL;
    root=Insert(root,8);
    root=Insert(root,9);
    root=Insert(root,7);
    root=Insert(root,6);
    root=Insert(root,10);
    root=Insert(root,15);
    root=Insert(root,1);
    root=Insert(root,5);
    root=Insert(root,3);
    Inorder(root);
    cout<<endl;
    Preorder(root);
    cout<<endl;
    Postorder(root);
    cout<<endl;
    return 0;
}

node* Insert(node* root,int num)
{
    node* newnode=new node;
    newnode->data=num;
    newnode->left=NULL;
    newnode->right=NULL;

    if(root==NULL)
        root=newnode;
    else if(root->data>num)
        root->left=Insert(root->left,num);
    else if(root->data<num)
        root->right=Insert(root->right,num);
    else
        cout<<"Duplicate data found\n";

    return root;
}

void Inorder(node* root)
{
    if(root!=NULL)
    {
        Inorder(root->left);
        cout<<root->data<<" ";
        Inorder(root->right);
    }
}

void Preorder(node* root)
{
    if(root!=NULL)
    {
        cout<<root->data<<" ";
        Inorder(root->left);
        Inorder(root->right);
    }
}

void Postorder(node* root)
{
    if(root!=NULL)
    {
        Inorder(root->left);
        Inorder(root->right);
        cout<<root->data<<" ";
    }
}
