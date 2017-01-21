#include<stdio.h>
#include<math.h>

void prime(int n)
{
int num,i,count=0;
  for(i=1;i<=num;i++){
     if(num%i==0)
		 count++;
  }
  if(count==2)
	  printf("%d is a prime number\n" , num);
  else
	  printf("%d is not a prime number\n" , num);


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

