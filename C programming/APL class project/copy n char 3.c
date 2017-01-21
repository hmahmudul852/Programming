#include<stdio.h>

int main()
{
    int a=20;
    char str1[a],str2[a];
    int i,n;

    for(i=0;i<a;i++)
        scanf("%c",&str1[i]);
    str1[i]='\0';

    scanf("%d",&n);
    for(i=0;i<n;i++)
        str2[i]=str1[i];

    str2[i]='\0';

    puts(str1);
    puts(str2);
    return 0;
}

