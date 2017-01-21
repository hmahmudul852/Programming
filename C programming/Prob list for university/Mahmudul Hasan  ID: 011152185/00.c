//  Bismillah hir rahmanir raheem. Thanks to Allah for everything.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sr1[10],sr2[3];
    printf("Enter your ID: ");
    gets(sr1);

    int i;
    sr2[0]=sr1[7];
    sr2[1]=sr1[8];
    sr2[2]='\0';

    int a=atoi(sr2);
    printf("You have to do %d no problem",(a%23)+1);

    return 0;

}

