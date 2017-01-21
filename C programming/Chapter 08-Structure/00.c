#include<stdio.h>

struct point
{
    int x,y;
};


 int main()
 {
     struct point a;
     a.x=24;
     a.y=35;

     printf("%d %d",a.x,a.y);

     return 0;
 }
