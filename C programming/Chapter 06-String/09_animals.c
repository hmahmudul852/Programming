#include<stdio.h>
int main()
{
    char a[10][100];//String Array
    int c[10]={0},d[10]={0},map[10]={0};
    int i;
    printf("Enter 10 names: \n");
    for(i=0; i<10; i++)
    {
        scanf("%s",a[i]);
    }

    int j,k;
    for(j=0; j<10; j++)
    {
        for(k=0;k<10;k++)
        {
            if(strcmp(a[j],a[k])==0)
            {
                c[j]++;
            }
        }
    }
    int l,m;
    for(l=0; l<10; l++)
    {
        for(m=l;m<10;m++)
        {
            if(strcmp(a[l],a[m])==0)
            {
                d[l]++;

            }
        }
    }
    int o;
    for(o=0;o<10;o++)
    {
        if(c[o]!=d[o])
            map[o]=1;
    }
    int n;
    for(n=0; n<10; n++)
    {
        if(map[n]==0)
            printf("%s = %d\n",a[n],c[n]);
    }

    return 0;
}
