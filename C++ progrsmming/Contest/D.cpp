#include<bits/stdc++.h>

int max(int a, int b);

/* Returns length of LCS for X[0..m-1], Y[0..n-1] */
int lcs( int X[], int Y[], int m, int n )
{
   if (m == 0 || n == 0)
     return 0;
   if (X[m-1] == Y[n-1])
     return 1 + lcs(X, Y, m-1, n-1);
   else
     return max(lcs(X, Y, m, n-1), lcs(X, Y, m-1, n));
}

/* Utility function to get max of 2 integers */
int max(int a, int b)
{
    return (a > b)? a : b;
}

/* Driver program to test above function */
int main()
{
  int X[] = {3,1,2,4,9,5,10,6,8,7};
//  int Y[] = {1,2,3,4,5,6,7,8,9,10};
//  int Y[] = {4,7,2,3,10,6,9,1,5,8};
//  int Y[] = {3,1,2,4,9,5,10,6,8,7};
//  int Y[] = {2,10,1,3,8,4,9,5,7,6};

  int m = 10;
  int n = 10;

  printf("Length of LCS is %d\n", lcs( X, Y, m, n ) );

  return 0;
}
