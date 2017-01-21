#include<stdio.h>
int main()
{
    int n,num,pos=0,neg=0;
    scanf("%d",&n);
    int i;
    for(i=0; i<n; i++)
    {
        scanf("%d",&num);
        if(num>0)
            pos+=1;
        else if(num<0)
            neg+=1;
    }

    printf("%d %d",pos,neg);

    return 0;
}
