#include<stdio.h>
#include<ctype.h>
int main()
{
    int a;
    printf("Enter the size of the string: ");
    scanf("%d",&a);
    getchar();
    char st[a];
    printf("Enter what ever u want: ");
    gets(st);
    int i,j=0,k=0,l=0,m=0,n=0,o=0,p=0;
    for(i=0;st[i]!='\0';i++)
    {
        if(isalpha(st[i]))
                j++;
        else if(isdigit(st[i]))
                k++;
        else if(isspace(st[i]))
                l++;
        else if(ispunct(st[i]))
                m++;
        if(isupper(st[i]))
                n++;
        if(islower(st[i]))
                o++;
    }
    printf("alphabet = %d\ndigit = %d\nspace = %d\npunctuation = %d\nupper = %d\nlower = %d",j,k,l,m,n,o);
    return 0;
}



