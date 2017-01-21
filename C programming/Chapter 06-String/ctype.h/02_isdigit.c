#include<stdio.h>
#include<ctype.h>
int main()
{
    char c1[20]="gy6rby5efu6rgh7tfgy";
    int i,j=0;
    for(i=0;i<20;i++)
    {
        if(isdigit(c1[i]))
            j++;
        printf("%d\n",isdigit(c1[i]));
    }
    printf("Digits = %d",j);
    return 0;
}
