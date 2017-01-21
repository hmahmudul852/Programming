#include<stdio.h>
#include<string.h>

int main()
{
     int a, b, sum;
     FILE *fp;
     char st[100],st1[10]="END\n";
     while(1)
    {
         gets(st);
         a=strcmp(st,st1);
         if(a==0)
            break;
         else
        {
             fp = fopen("output1.txt","a");
             fprintf(fp, "%s",st);
             fclose(fp);
        }
    }
     return 0;
}
