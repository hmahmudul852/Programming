//  Bismillah hir rahmanir raheem. Thanks to Allah for everything.

//22: WAP to multiply two given matrices.

#define S 100

#include<stdio.h>

int main()
{
	int A[S][S],m,n,B[S][S],p,q,i,j,C[S][S];
	printf("Enter the row of Matrix A: ");
	scanf("%d",&m);

	printf("Enter the column of Matrix A: ");
	scanf("%d",&n);

	for(i=0; i<m; i++)
		for(j=0; j<n; j++)
			scanf("%d",&A[i][j]);

	printf("Enter the row of Matrix B: ");
	scanf("%d",&p);

	printf("Enter the column of Matrix B: ");
	scanf("%d",&q);

	if(n!=p)
		printf("Multiplication cannot possible between Matrix A and B");
	else
	{
		for(i=0; i<p; i++)
			for(j=0; j<q; j++)
				scanf("%d",&B[i][j]);


		for(i=0; i<m; i++)
		{
			for(j=0; j<q; j++)
			{
				int sum=0;
				for(int k=0; k<n; k++)
				{
					sum=sum+(A[i][k]*B[k][j]);

				}
				C[i][j]=sum;
			}
		}
		printf("MATRIX A :\n");
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				printf("%d " ,A[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		printf("MATRIX B :\n");
		for(i=0;i<p;i++){
			for(j=0;j<q;j++){
				printf("%d " ,B[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		printf("A x B =\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
				printf("%d  ",C[i][j]);
			printf("\n");
		}
	}
	return 0;

}
