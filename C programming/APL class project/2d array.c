#include<stdio.h>

int main()
{
    int a[2][3];

    int r,c;
    for(r=0;r<2;r++)
        for(c=0;c<3;c++)
            scanf("%d",&a[r][c]);

    int count=0;
    for(r=0;r<2;r++)
    {
        for(c=0;c<3;c++)
        {
            if(a[r][c]%2!=0)
                count++;
        }
    }
    printf("%d",count);
    return 0;
}
