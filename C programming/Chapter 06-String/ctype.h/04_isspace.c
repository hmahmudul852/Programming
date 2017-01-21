#include<stdio.h>
#include<ctype.h>
int main()
{
    char c1[38]="hi gh8 t8yg698y86t 6 t6 t6t 6t 68t 68t";
    int i,j=0;
    for(i=0;i<38;i++)
    {
        if(isspace(c1[i])!=0)
            j++;
    }
    printf("space =  %d",j);
    return 0;
}
