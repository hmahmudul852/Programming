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
    int c,ca=1;
    cin>>c;
    while(c--)
    {
        root=NULL;
        int n;
        cin>>n;
        while(n--)
        {
            int a;
            cin>>a;
            root=Insert(root,a);
        }
        cout<<"Case "<<ca<<":\n";
        ca++;
        cout<<"Pre.:";
        Preorder(root);
        cout<<endl;
        cout<<"In..:";
        Inorder(root);
        cout<<endl;
        cout<<"Post:";
        Postorder(root);
        cout<<endl;
        cout<<endl;
    }
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
    else if(root->data>newnode->data)
        root->left=Insert(root->left,newnode->data);
    else if(root->data<newnode->data)
        root->right=Insert(root->right,newnode->data);

    return root;
}

void Inorder(node* root)
{
    if(root!=NULL)
    {

        Inorder(root->left);
        cout<<" "<<root->data;
        Inorder(root->right);
    }
    else return;
}

void Preorder(node* root)
{
    if(root!=NULL)
    {
        cout<<" "<<root->data;
        Preorder(root->left);
        Preorder(root->right);
    }
    else return;
}

void Postorder(node* root)
{
    if(root!=NULL)
    {
        Postorder(root->left);
        Postorder(root->right);
        cout<<" "<<root->data;
    }
    else return;
}
