#include<stdio.h>
int main()
{
    int s;
    printf("Enter the size of both array: ");
    scanf("%d",&s);
    int a[s],b[s],c[s];
    int d,e,f,g,h;
    printf("Enter the values in 1st array: ");
    for(d=0;d<s;d++)
        scanf("%d",&a[d]);
    printf("Enter the values in 2nd array: ");
    for(e=0;e<s;e++)
        scanf("%d",&b[e]);


    for(f=0;f<s;f++)
        c[f]=a[f]+b[f];

    printf("The value in 3rd array are: ");
    for(g=0;g<s;g++)
        printf("%d ",c[g]);
    return 0;
}

