#include<stdio.h>
int main()
{
    char arr[5][100]; //String Array
    int i,j;
    for(i=0; i<5; i++)
    {
        scanf("%s",arr[i]);
    }

    for(j=0; j<5; j++)
    {
        puts(arr[j]);
    }
    return 0;
}

