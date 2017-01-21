#include<stdio.h>
#include<ctype.h>
int main()
{
    char c1[15]="h985gv86t5v76f";
    int i,j=0;
    for(i=0;i<15;i++)
    {
        if(isxdigit(c1[i])!=0)
            j++;
    }
    printf("hexadecimal =  %d",j);
    return 0;
}


