//  Bismillah hir rahmanir raheem. Thanks to Allah for everything.

//20:WAP to find the prime factors of given integer

#include<stdio.h>

int main()
{
  int num,i,j,count;

  printf("Enter a number: ");
  scanf("%d",&num);

  printf("prime factors of the integer:\n");
  for(i=1;i<=num;i++)
  {
      count=0;
      if(num%i==0)
      {
          for(j=1;j<=i;j++)
          {
            if(i%j==0)
				count++;
          }
		  if(count == 2)
             printf("%d\n",i);
      }

   }
   return 0;
}
