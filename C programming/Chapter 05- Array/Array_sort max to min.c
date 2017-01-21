#include<stdio.h>
int main()
{
    int s;
    printf("Enter the size of array: ");
    scanf("%d",&s);
    int a[s];
    int b,c,d,e,f,g;
    for(b=0;b<s;b++)
        scanf("%d",&a[b]);
    for(c=0;c<s;c++)
    {
        for(d=c+1;d<s;d++)
        {
            if(a[c]<a[d])
            {
                f=a[c];
                a[c]=a[d];
                a[d]=f;
            }

        }
    }
    for(e=0;e<s;e++)
        printf("%d ",a[e]);
    return 0;
}

