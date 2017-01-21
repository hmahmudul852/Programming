//  Bismillah hir rahmanir raheem. Thanks to Allah for everything.

//15: WAP to find the transpose of a matrix.

#define S 100

#include<stdio.h>
int main()
{
	int A[S][S],i,j,r,c;

	printf("Enter row numbers of matrices A: ");
	scanf("%d" , &r);

	printf("Enter coloumn numbers of matrices A: ");
	scanf("%d" , &c);

    printf("Now enter the matrices: \n");
	for(i=0;i<r;i++)
        for(j=0;j<c;j++)
			scanf("%d", &A[i][j]);

	printf("MATRIX A :\n");
	for(i=0;i<r;i++)
    {
		for(j=0;j<c;j++)
		{
			printf("%d " ,A[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");

	printf("TRANSPOSE of MATRIX A :\n");
	for(i=0;i<c;i++)
    {
		for(j=0;j<r;j++)
		{
			printf("%d " , A[j][i]);
		}
		printf("\n");
	}
	return 0;
}
