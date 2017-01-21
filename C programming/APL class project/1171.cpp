#include<cstdio>

int main()
{
    int line;
    scanf("%d",&line);
    int ar[2222]={0};
    int n;
    while(line--)
    {
        scanf("%d",&n);
        ar[n]++;
    }
    for(int i=1;i<=2000;i++)
    {
        if(ar[i]!=0)
            printf("%d aparece %d vez(es)\n",i,ar[i]);
    }
    return 0;
}
