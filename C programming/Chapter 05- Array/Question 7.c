#include<stdio.h>
int main()
{
    int n,m,l;
    printf("Enter the size of both array: ");
    scanf("%d%d",&n,&m);
    l=n+m;
    int a[n],b[m],c[l];
    int d,e,f,g,h;
    printf("Enter the values in 1st array: ");
    for(d=0;d<n;d++)
        scanf("%d",&a[d]);
    printf("Enter the values in 2nd array: ");
    for(e=0;e<m;e++)
        scanf("%d",&b[e]);


    for(f=0;f<n;f++)
        c[f]=a[f];

    for(g=n,h=0;g<l,h<m;g++,h++)
    {
        c[g]=b[h];
    }

    printf("The value in 3rd array are: ");
    for(g=0;g<l;g++)
        printf("%d ",c[g]);
    return 0;
}
