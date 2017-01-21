#include<stdio.h>
#include<math.h>

int main()

{
    int n;
    printf("Enter any positive num: ");
    scanf("%d",&n);
    int m=sqrt(n);
    int i,flag=0;
    for(i=2;i<=m;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("Its a prime num");
    else
        printf("Its not a prime num");
    return 0;
}
