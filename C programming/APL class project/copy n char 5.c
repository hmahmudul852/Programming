#include<stdio.h>

void str_ncat(char str1[],char str2[],int b)
{
    int i;
    for(i=0;i<b;i++)
    {
        str2[i]=str1[i];
    }

    puts(str2);
}

int main()

{
    int a=30;
    char str1[a],str2[a];
    printf("Enter both of ur strings: \n");

    gets(str1);
    gets(str2);

    int b;
    printf("How many last char u wanna cut: ");
    scanf("%d",&b);

    str_ncat(str1,str2,b);
    return 0;
}
