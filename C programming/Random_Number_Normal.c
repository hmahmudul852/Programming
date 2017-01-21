#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int normal;
    int n=10;

    srand(time(NULL));

    normal=rand()%n+1;

    printf("%d",normal);

    return 0;
}

