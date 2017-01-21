#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);

    char sr[101];
    getchar();
    int i,j;
    while(a--)
    {
        gets(sr);

        int b=strlen(sr);

        int n=(sr[b-1]-'0');

        if(n%2==0)
            printf("even\n");
        else
            printf("odd\n");


    }
    return 0;
}
