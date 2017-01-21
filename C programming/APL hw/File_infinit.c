#include<stdio.h>

int main()
{
    int a, b, sum;
    FILE *fp;
    fp = fopen("output.txt","a");
    fputs(fp, "Hello World!!!!");
    fclose(fp);
    return 0;
}
