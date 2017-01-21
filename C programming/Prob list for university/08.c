//8. WAP to find the union and intersection of two sets of integers.
#include<stdio.h>

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

    for(i=0;i<a;i++)
        un[i]=set1[i];

    for(j=0;j<b;j++)
        un[j+i]=set2[j];

    for(i=0; i<z; i++)
    {
        for(j=i+1;j<z;)
        {
            if(un[i]==un[j])
            {
                for(u=j;u<z;u++)
                {
                    un[u]=un[u+1];
                }
                z--;
            }
            else
            {
                z++;
            }
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
