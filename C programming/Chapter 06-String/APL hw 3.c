#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main()
{
    char msg[100];
    printf("Enter ur string:");
    gets(msg);
    char str[100];

    int i=0,j=0,k;

    while(msg[i]!= '\0')
    {
        if(isalpha(msg[i]))
        {
            str[j] = msg[i];
            j++;
        }
        else
        {
            str[j]='\0';
            for(k=strlen(str); k>=0; k--)
                printf("%c",str[k]);
            printf("%c",msg[i]);
            j=0;
        }
        i++;
    }

    str[j]='\0';
    for(k=strlen(str); k>=0; k--)
         printf("%c",str[k]);

    return 0;
}
