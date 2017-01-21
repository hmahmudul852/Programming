#include<stdio.h>



int main()
{
    int a;

    scanf("%d",&a);
    getchar();

    while(a--)
    {
        char s1[6];

        gets(s1);
        if(s1[0]==s1[3]||s1[0]==s1[4]||s1[1]==s1[3]||s1[1]==s1[4])
        {
            char b='*',c='*';
            if(s1[0]==s1[3])
                b=s1[0];
            else if(s1[0]==s1[4])
                b=s1[0];

            if(s1[1]==s1[3])
                c=s1[1];
            else if(s1[1]==s1[4])
                c=s1[1];

            if(b!='*' && c!='*')
            {
                if(b==c)
                    printf("%c\n",b);
                else if(b<c)
                    printf("%c%c\n",b,c);
                else
                    printf("%c%c\n",c,b);
            }
            else
            {
                if(b!='*')
                    printf("%c\n",b);
                else if(c!='*')
                    printf("%c\n",c);
            }

        }
        else
        {
            printf("N\n");
        }
    }
    return 0;
}

