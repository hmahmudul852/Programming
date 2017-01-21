//  Bismillah hir rahmanir raheem. Thanks to Allah for everything.

//Problem 14: WAP to check whether a matrix is symmetric matrix

#define S 50

#include<stdio.h>

int main()
{
   int m, n, c, d, A[S][S], A_trans[S][S];

   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d",&m,&n);

   printf("Enter the elements of matrix\n");

   for(c=0;c<m;c++)
      for ( d = 0 ; d < n ; d++ )
		  scanf("%d",&A[c][d]);

   for(c = 0 ; c < m ; c++ )
      for( d = 0 ; d < n ; d++ )
		   A_trans[d][c] = A[c][d];

   if ( m == n )
   {
       for ( c = 0 ; c < m ; c++ )
       {
           for ( d = 0 ; d < m ; d++ )
           {
               if (A[c][d] !=  A_trans[c][d])
                  break;
           }
           if ( d != m )
              break;
       }
       if ( c == m )
          printf("Symmetric matrix.\n");
   }
   else
       printf("Not a symmetric matrix.\n");

   return 0;
}
