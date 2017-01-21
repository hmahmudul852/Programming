#include<stdio.h>
#include<ctype.h>
int main()
{
    char c1[15]="mAhMuDuL hAsAn";
    int i,j=0;
    for(i=0;i<15;i++)
    {
        if(islower(c1[i])!=0)
            j++;
    }
    printf("lower =  %d",j);
    return 0;
}

