#include<bits/stdc++.h>
#define FOR(n) for(register int i=0; i<(int)n; i++)
#define DO(function, A) function(A.begin(), A.end());
#define RDO(function, A) function(A.rbegin(), A.rend());
using namespace std;

int main() {

    int t,n, temp;
    unsigned long long rid,pid;
    unordered_map<unsigned long long, unsigned long long> A;

    scanf("%d",&t);
//    cin>>t;
    FOR(t) {
        A.clear();

        scanf("%d",&n);
//        cin>>n;
        FOR(n) {
            scanf("%d",&temp);
//            cin>>temp;
            if(temp==1){
                scanf("%llu%llu",&pid,&rid);
//                cin>>pid>>rid;
                if(A[rid]==0) { printf("Y\n"); A[rid]=pid;}
                else printf("N\n");
            }
            else{
                scanf("%llu",&rid);
//                cin>>rid;
                if(A[rid]==0)  printf("F\n");
                else{
                    printf("%llu\n",A[rid]);
//                    cout<<A[rid]<<"\n";
                    A[rid]=0;
                }
            }
        }
    }
}
