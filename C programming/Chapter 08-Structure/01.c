#include<stdio.h>

struct bios
{
    char n[50],m[50];
    double c;
};

int main()
{
    printf("How many student information u wanna keep: ");
    int s;
    scanf("%d",&s);
    getchar();
     struct bios c[s];
     int i;
     for(i=0;i<s;i++)
     {
         printf("\nSTUDENT %d: \n",i+1);

         printf("\nNAME: ");
         gets(c[i].n);

         printf("MOBILE NUMBER: ");
         gets(c[i].m);

         printf("CGPA: ");
         scanf("%lf",&c[i].c);

         getchar();

     }

     char g[50];
     printf("\n\nEnter the name that u wanna search: ");
     gets(g);
     for(i=0;i<s;i++)
     {
         if(strcmp(g,c[i].n)==0)
         {
             printf("\nSTUDENT %d: \n",i+1);

             printf("NAME: ");
             puts(c[i].n);

             printf("MOBILE NUMBER: ");
             puts(c[i].m);

             printf("CGPA: ");
             printf("%0.2lf\n",c[i].c);

         }
     }


    return 0;
}
