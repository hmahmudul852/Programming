//  Bismillah hir rahmanir raheem. Thanks to Allah for everything.

//12: WAP to find AND,OR,XOR from two different length bit strings.

#include<stdio.h>

int max(int a,int b)
{
    if(a<b)
        return b;
    else
        return a;
}

int main()
{
	int i,j,n,m,diff;
	printf("Enter size of first string: ");
	scanf("%d", &n);
	printf("Enter size of second string: ");
	scanf("%d", &m);
	getchar();

	int maxs=max(m,n)+1;

	char A[maxs],B[maxs];

	if(m>n)
		diff = m-n;
	else
		diff = n-m;
	printf("difference of both string length=%d\n" ,diff);



	if(n>m)
    {
		printf("A = ");
		gets(A);

		printf("B = ");
		for(i=0;i<diff;i++)
			B[i] = '0';

		for(i=diff;i<maxs;i++)
			scanf("%c" ,&B[i]);
	}
	else
    {
        printf("A = ");
		for(i=0;i<diff;i++)
			A[i] = '0';

		for(i=diff;i<maxs;i++)
			scanf("%c" ,&A[i]);

        printf("B = ");
		gets(B);
    }

	printf("\nAND: ");
    for(i=0,j=0;i<maxs,j<maxs;i++,j++)
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
    for(i=0,j=0;i<maxs,j<maxs;i++,j++)
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
    for(i=0,j=0;i<maxs,j<maxs;i++,j++)
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
