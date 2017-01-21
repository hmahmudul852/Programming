
#include<stdio.h>

int main()
{
    char str1[20],str2[20];
    gets(str1);

    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        str2[i]=str1[i];

    str2[i]='\0';

    puts(str1);
    puts(str2);
    return 0;
}

