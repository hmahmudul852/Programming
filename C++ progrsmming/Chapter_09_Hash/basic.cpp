#include<bits/stdc++.h>

#define HASHSIZE 101

using namespace std;

typedef struct node
{
    char *key;
    char *value;
    struct node *next;
}node;


node* hashTable[HASHSIZE];

void createHashTable()
{
    for(int i=0;i<HASHSIZE;i++)
        hashTable[i]=NULL;
}

unsigned int Hash(char *s)
{
    unsigned int h=0;
    for(;*s;s++)
        h=*s+h*31;

    return h%HASHSIZE;
}

node* lookup(char *n)
{
    unsigned int hi=Hash(n);
    node* np=hashTable[hi];

    for(;np!=NULL;np=np->next)
    {
        if(!strcmp(np->key,n))
            return np;
    }
    return NULL;
}

char* m_strdup(char *o)
{
    int l=strlen(o)+1;
    char *ns=(char*)malloc(l*sizeof(char));
    strcpy(ns,o);
    return ns;
}

char* getValue(char* key)
{
    node* n=lookup(key);
    if(n==NULL)
        return NULL;
    else
        return n->value;
}

int insertValue(char* key,char* value)
{
    unsigned int hi;
    node* np;
    if((np=lookup(key))==NULL)
    {
        hi=Hash(key);
        np=(node*)malloc(sizeof(node));
        if(np==NULL)
            return 0;
        np->key=m_strdup(key);

        if(np->key==NULL)
            return 0;

        np->next=hashTable[hi];
        hashTable[hi]=np;
    }
    else
        free(np->value);

    np->value=m_strdup(value);
    if(np->value==NULL)
        return 0;

    return 1;
}

void displayHashTable()
{
    int i;
    node *t;
    for(i=0;i<HASHSIZE;i++)
    {
        if(hashTable[i]!=NULL)
        {
            t=hashTable[i];
            for(;t!=NULL;t=t->next)
                printf("%s -----> %s\n",t->key,t->value);
        }
    }
}

void deleteTable()
{
    int i;
    node *np,*t;

    for(i=0;i<HASHSIZE;i++)
    {
        if(hashTable[i]!=NULL)
        {
            np=hashTable[i];
            while(np!=NULL)
            {
                t=np->next;
                free(np->key);
                free(np->value);
                free(np);
                np=t;
            }
        }
    }
}

int main()
{
    createHashTable();
    insertValue("phone","01673780365");
    insertValue("phone2","0160365");

    cout<<getValue("phone")<<endl;

    displayHashTable();
    deleteTable();

    return 0;
}
