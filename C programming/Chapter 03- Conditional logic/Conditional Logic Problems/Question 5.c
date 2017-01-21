/*If the ages of Ram, Sulabh and Ajay are input by the user, write a program to
determine the youngest of the three.*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 persons age: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b&&a<c)
        printf("Ram is the youngest");
    else if(b<a&&b<c)
        printf("Shulabh is the youngest");
    else
        printf("Ajay is the youngest");

    return 0;
}
