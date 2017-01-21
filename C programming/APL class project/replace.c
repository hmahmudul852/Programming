#include<stdio.h>

int main()
{
    int a=20;
    char arr[a];
    printf("Enter ur string: ");
    gets(arr);
    char b;
    printf("Enter the character u want to replace: ");
    scanf("%c",&b);
    int count=0;
    int i;
    for(i=0;arr[i]!='\0';i++)
    {
        if(b==arr[i])
        {
            arr[i]='#';
            count++;
        }
    }
    printf("The new string: ");
    puts(arr);
    printf("\n%c is %d times",b,count);
    return 0;
}
