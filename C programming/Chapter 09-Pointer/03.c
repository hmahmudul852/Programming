#include<stdio.h>

int main()
{
    //ptr=(cast-type*)malloc(byte-size)

    int *n,*a; char *c;
    n=(int*)malloc(sizeof(int));
    c=(char*)malloc(sizeof(char));
    a=(int*)calloc(5,sizeof(int));
    int i;
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    for(i=0;i<5;i++)
        printf("%d ",a[i]);

    free(a);

    a=realloc(a,3);
    for(i=0;i<5;i++)
        printf("%d ",a[i]);

    scanf("%d",&n);
    printf("\n%d",n);

    free(a);
    free(n);
    free(c);

    return 0;
}
