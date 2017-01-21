//  Bismillah hir rahmanir raheem. Thanks to Allah for everything.

//16: WAP to find the Cartesian product of two given sets of integers.

#include<stdio.h>

#define S 50

int main()
{
	int A[S],B[S],n,m,i,j;

	printf("Enter A set element number:\n");
	scanf("%d" , &n);

	printf("Enter B set element number:\n");
	scanf("%d" , &m);

	printf("A = ");
	for(i=0;i<n;i++)
		scanf("%d" , &A[i]);

	printf("B = ");
	for(i=0;i<m;i++)
		scanf("%d" , &B[i]);

	printf("Cartesian Product of set A and B: {");
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			printf("(%d,%d)," , A[i],B[j]);

	printf("}\n");

	return 0;
}
