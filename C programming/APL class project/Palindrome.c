#include<stdio.h>
#include<string.h>

void cq_pl(char str1[100],char str2[100])
{
   int a=strlen(str1),count=0;

   int i;
   for(i=0;i<a;i++)
   {
       if(str1[i]==str2[i])
        count++;

   }
   if(count==a)
    printf("YES");
   else
    printf("NO\n");
}

int main()
{
    char str1[100];
    printf("Enter ur string: ");
    gets(str1);
    int a=strlen(str1);
    char str2[a+1];

    int i,j;
    for(i=a-1,j=0;i>=0;i--,j++)
        str2[j]=str1[i];
    str2[j]='\0';

    cq_pl(str1,str2);

    return 0;
}

