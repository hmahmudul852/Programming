#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n,j;

    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        scanf("%d",&n);
        for(int i=0; i<=n; i++){
            printf("%d",i);
            if(i<n) printf(" ");
        }
        if(j<t-1)
            printf("\n");
    }
}
