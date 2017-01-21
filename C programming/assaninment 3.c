#include<stdio.h>
void main()
{
    int start,n,result=0;
    scanf("%d%d",&start,&n);
    for(start;start<=n;start=start+2)
    {
        result=result+start+n;
    }
    printf("%d",result);
}
