//  Bismillah hir rahmanir raheem. Thanks to Allah for everything.

//11: WAP to find AND,OR,XOR from two same length bit strings.

#include<stdio.h>

int main()
{
	int i,j,n;
	printf("Enter size of two bit string: ");
	scanf("%d", &n);
	getchar();
	char A[n+1],B[n+1];
	printf("A = ");
	gets(A);
	printf("B = ");
	gets(B);

	printf("\nAND: ");
	for(i=0,j=0;i<n,j<n;i++,j++)
    {
		if(A[i]=='1' && B[j]=='1')
			printf("1");

		else if(A[i]=='1' && B[j]=='0')
			printf("0");

		else if(A[i]=='0' && B[j]=='1')
			printf("0");

		else if(A[i]=='0' && B[j]=='0')
			printf("0");
	}

	printf("\nOR: ");
	for(i=0,j=0;i<n,j<n;i++,j++)
    {
		if(A[i]=='1' && B[j]=='1')
			printf("1");

		else if(A[i]=='1' && B[j]=='0')
			printf("1");

		else if(A[i]=='0' && B[j]=='1')
			printf("1");

		else if(A[i]=='0' && B[j]=='0')
			printf("0");
	}

	printf("\nXOR: ");
	for(i=0,j=0;i<n,j<n;i++,j++)
    {
		if(A[i]=='1' && B[j]=='1')
			printf("0");

		else if(A[i]=='1' && B[j]=='0')
			printf("1");

		else if(A[i]=='0' && B[j]=='1')
			printf("1");

		else if(A[i]=='0' && B[j]=='0')
			printf("0");
	}
	return 0;
}
