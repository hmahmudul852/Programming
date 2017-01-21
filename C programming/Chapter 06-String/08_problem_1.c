#include<stdio.h>
int main()
{
    char fn[20],ln[20],ad[30],un[30],mr[5],re[5],sa[2]=" ";
    int age;
    printf("Enter ur first name: ");
    gets(fn);
    printf("last name: ");
    gets(ln);
    printf("age: ");
    scanf("%d",&age);
    getchar();
    printf("address: ");
    gets(ad);
    printf("university: ");
    gets(un);
    printf("r u married: ");
    gets(mr);
    printf("r u in a relationship: ");
    gets(re);
    strcat(fn,sa);
    strcat(fn,ln);
    strupr(fn);
    strupr(ad);
    strupr(un);
    strupr(mr);
    strupr(re);
    printf("\n\n\n\nYour name is %s. You r %d years old. You live in %s. You study in %s.\nR u married '%s'.R u in a relationship '%s'.",fn,age,ad,un,mr,re);
    return 0;
}
