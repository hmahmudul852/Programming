#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int max=5,min=1;
    int range;

    srand(time(NULL));

    range=rand()%(max-min+1)+min;

    printf("%d",range);

    return 0;
}

