#include<stdio.h>

void c_n_c(char str1[20],char str2[20],int n)
{
    int i;
    for(i=0;i<n;i++)
        str2[i]=str1[i];
    str2[i]='\0';
}

int main()
{
    char str1[20],str2[20];
    gets(str1);

    int i,n;
    scanf("%d",&n);

    c_n_c(str1,str2,n);

    puts(str1);
    puts(str2);
    return 0;
}

