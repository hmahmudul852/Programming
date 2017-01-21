#include<stdio.h>
#include<ctype.h>
int main()
{
    char c1[7]="H2asan";
    int i,j=0;
    for(i=0;i<7;i++)
    {
        if(isalpha(c1[i])!=0)
            j++;
    }
    printf("alphabets =  %d",j);
    return 0;
}


