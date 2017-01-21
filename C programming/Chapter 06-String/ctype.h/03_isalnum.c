#include<stdio.h>
#include<ctype.h>
int main()
{
    char c1[20]="8iuyt87ib86t7v76vf6";
    int i,j=0;
    for(i=0;i<20;i++)
    {
        if(isalnum(c1[i])!=0)
            j++;
    }
    printf("alphanumerics =  %d",j);
    return 0;
}
