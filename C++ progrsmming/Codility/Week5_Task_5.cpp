#include<cstdio>
#include<cstdlib>
#include<cmath>
int main()
{
    int line;
    scanf("%d",&line);
    int ar[line];
    int sum=0;
    for(int i=0;i<line;i++)
    {
        scanf("%d",&ar[i]);
        sum+=ar[i];
    }
    int taxi=ceil(sum/4.0);
    printf("%d",taxi);
    return 0;
}
