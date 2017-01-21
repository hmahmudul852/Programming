#include<stdio.h>

int main()
{
    long long t,n;

    scanf("%lld",&t);
    for(long long j=0; j<t; j++) {
        scanf("%lld",&n);
        for(long long i=0; i<=n; i++){
            printf("%lld",i);
            if(i<n) printf(" ");
        }
            printf("\n");
    }
    return 0;
}
