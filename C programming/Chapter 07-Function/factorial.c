#include<stdio.h>

int fatr(int a)
{
    int i,ans=1;
    for(i=1;i<=a;i++)
    {
        ans=ans*i;
    }
    return ans;
}


int main()
{
    int a,ans;
    scanf("%d",&a);
    ans=fatr(a);
    printf("%d\n",ans);
    return 0;
}
