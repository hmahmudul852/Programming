#include<cstdio>

int main()
{
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    freopen("output2.txt","a",stdout);
    int a[10],sum=0;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        sum += a[i];
        printf("sum = %d\n",sum);
    }

    return 0;
}
