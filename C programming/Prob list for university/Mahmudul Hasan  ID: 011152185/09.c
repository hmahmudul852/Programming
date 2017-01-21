//  Bismillah hir rahmanir raheem. Thanks to Allah for everything.

//9: WAP to generate nth sequence by using pseudo-random number generator and seed.

#include<stdio.h>
#include<math.h>

int main()
{
	int seed,increment,modulus,multiplier,n,i;
	printf("seed = ");
	scanf("%d", &seed);

	printf("modulus = ");
	scanf("%d", &modulus);

	printf("multiplier = ");
	scanf("%d", &multiplier);

	printf("increment = ");
	scanf("%d", &increment);

	printf("n = ");
	scanf("%d", &n);

	int pseudo[n];
	printf("The sequence upto %dth term is : %d ",n,seed);

	for(i=1;i<n;i++)
    {
		pseudo[i] = ((multiplier*seed) + increment) % modulus;
		printf("%d " , pseudo[i]);
		seed = pseudo[i];
	}
	printf("\n");


	return 0;
}
