#include<stdio.h>

int main ()
{
    char a;
    int i,j;
    printf("Now enter a character: ");
    scanf("%c", &a);
    printf("Now enter how many times u want to see it: ");
    scanf("%d", &i);

    for (j=0;j<i;j++)
        printf("%c\n",a);

    return 0;
}
