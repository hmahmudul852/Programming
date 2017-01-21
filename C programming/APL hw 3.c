#include<stdio.h>

int main()

{
    char str1[100];
    printf("Enter ur string: ");
    gets(str1);

    char str2[100];
    int i,j,s,e;

    for(i=0;str1[i]='\0';i++)
    {
        if(isalpha(str1[i])==0)
            str2[i]=str1[i];
    }
    for(i=0,j=0;str1[i]!='\0';i++,j++)
    {
        if(isalpha(str1[i])==0 || isalpha(str1[0]))
        {
            if(isalpha(str1[i+1]))
                s=i;
            else if(isalpha(str1[0]))
                s=0;

            if(isalpha(str1[i-1]))
                e=i;
        }

        if(e<s)
        {
            str2[j]=str1[e];
            e--;
        }
    }
    str2[j]='\0';

    puts(str2);
    return 0;
}
