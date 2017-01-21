#include<stdio.h>
#include<ctype.h>
int main()
{
    char c1[15]="jdnqabcgdhtsgj";
    int i,j=0;
    for(i=0;i<15;i++)
    {
        if(iscntrl(c1[i])!=0)
            printf("no %d is a control character\n",i);
    }
    return 0;
}


