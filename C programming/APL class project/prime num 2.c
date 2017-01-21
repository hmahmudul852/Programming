#include<stdio.h>
#include<math.h>

void prime(int n)
{
    int a;
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
	  printf("%d is a prime number\n" , n);


}

int main()

{
    int a,c;
    printf("Enter ur num range: ");
    scanf("%d%d",&a,&c);
    int i;
    for(i=a;i<=c;i++)
        prime(i);



    return 0;
}
