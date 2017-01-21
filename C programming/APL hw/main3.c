#include<stdio.h>

void addnote(char st[100])
{
    FILE *fp;
    fp = fopen("output.txt","a");
    fprintf(fp, "%s/n",st);
    fclose(fp);
}

int main()
{
    char st[100];
    gets(st);
    addnote(st);
    return 0;
}

