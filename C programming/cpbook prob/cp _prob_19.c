#include <string.h>
#include <stdio.h>

int main()
{
    char str[80] ="way no no good";
    const char delimiter[2] =" ";
    char *token;
    token = strtok(str, delimiter);

    int words=0;

    while(token != NULL)
    {
        printf("%s\n", token);
        token=strtok(NULL,delimiter);
        words++;
    }
    printf("\nTotal Words = %d\n",words);

    return 0;
}
