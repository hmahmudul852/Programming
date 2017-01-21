#include<stdio.h>
#include<stdlib.h>
//
//int main()
//{
//    char sr1[10],sr2[3];
//    printf("Enter your ID: ");
//    gets(sr1);
//    int i;
//    sr2[0]=sr1[7];
//    sr2[1]=sr1[8];
//    sr2[2]='\0';
//    int a=atoi(sr2);
//    printf("You have to do %d no problem",(a%23)+1);
//    return 0;
//
//}

int max(int a,int b)
{
    return (a>b)?a:b;
}

int main()
{
    int a,b;
    printf("Enter the size of ur sets: ");
    scanf("%d%d",&a,&b);

    int set1[a],set2[b];
    int i,j,c;

    printf("Enter elements of 1st set: ");
    for(i=0;i<a;i++)
        scanf("%d",&set1[i]);

    printf("Enter elements of 2nd set: ");
    for(i=0;i<b;i++)
        scanf("%d",&set2[i]);

    int x=0,u=0,z=max(a,b),y=a+b,v=0;
    int un[y],in[z];
//    memset(in,0,z);
//    memset(un,0,y);
    memset(in,0,sizeof(in));
    memset(un,0,sizeof(un));

    for(i=0;i<a;i++)
    {
        int flag=0;int prev;
        for(j=0;j<b;j++)
        {
            if(set1[i]==set2[j] && flag==0 && prev!=set1[i])
            {
                in[x]=set1[i];
                flag=1;
                x++;
                prev=set1[i];
                break;
            }
        }
    }

    for(i=0;i<(x-1);i++)
    {
        for(j=0;j<a;j++)
        {
            if(in[i]!=set1[j]);
                un[i]=set1[j];
        }
    }
    int k,l;
    for(k=0;k<(x-1);k++)
    {
        for(l=0;l<b;l++)
        {
            if(in[i]!=set2[l])
                un[i+j]=set2[l];
        }
    }



    printf("Intersection of two sets are= ");
    for(i=0;i<x;i++)
        printf("%d ",in[i]);

     printf("\nUnion and of two sets= ");
     for(i=0;i<y;i++)
            printf("%d ",un[i]);
    return 0;
}
