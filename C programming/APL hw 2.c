#include<stdio.h>

int main()

{
    char str1[1000];
    int n;

    printf("Enter ur string: ");
    gets(str1);

    printf("\nEnter value of n: ");
    scanf("%d",&n);

    char str2[n+1];
    int i,j;

    for(i=n-1,j=0;n>=j;i--,j++)
    {
        str2[j]=str1[i];
    }
    str2[j]='\0';

    puts(str2);
    return 0;
}
