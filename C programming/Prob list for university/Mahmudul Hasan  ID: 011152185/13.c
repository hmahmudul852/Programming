//  Bismillah hir rahmanir raheem. Thanks to Allah for everything.

// 13: WAP to find meet and join of two matrix.

#define S 50

#include<stdio.h>

int main()
{
	int m,n,A[S][S],B[S][S],C[S][S],i,j;

	printf("m= ");
	scanf("%d",&m);

	printf("n= ");
	scanf("%d",&n);

	printf("A= \n");
	for(i=0; i<m; i++)
		for(j=0;j<n;j++)
			scanf("%d",&A[i][j]);

	printf("B= \n");

	for(i=0; i<m; i++)
		for(j=0;j<n;j++)
			scanf("%d",&B[i][j]);

	printf("Join of A and B= \n");

	for(i=0;i<m;i++)
    {
		for(j=0;j<n;j++)
        {
			if(A[i][j]==1 && B[i][j]==1)
				printf("1 ");
			else if(A[i][j]==1 && B[i][j]==0)
				printf("1 ");
			else if(A[i][j]==0 && B[i][j]==1)
				printf("1 ");
			else if(A[i][j]==0 && B[i][j]==0)
				printf("0 ");
        }
	}

	printf("\n");

	printf("Meet of A and B= \n");
	for(i=0;i<m;i++)
    {
		for(j=0;j<n;j++)
		{
			if(A[i][j]==1 && B[i][j]==1)
				printf("1 ");
			else if(A[i][j]==1 && B[i][j]==0)
				printf("0 ");
			else if(A[i][j]==0 && B[i][j]==1)
				printf("0 ");
			else if(A[i][j]==0 && B[i][j]==0)
				printf("0 ");
		}
	}

	return 0;
}
