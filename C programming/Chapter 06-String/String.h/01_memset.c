#include<stdio.h>
/*
it initializes the first n values/characters into an array/string with a given value
*/
int main()
{
    char  arr[100];//={'a','a','a','a','a','a','a','a','a','a'};
    memset(arr,'a',10);
    //gets(a);
    puts(arr);
    return 0;
}

