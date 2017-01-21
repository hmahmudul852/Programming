
#include<bits/stdc++.h>
#define FOR(n) for(register int i=0; i<(int)n; i++)
#define DO(function, A) function(A.begin(), A.end());
#define RDO(function, A) function(A.rbegin(), A.rend());
using namespace std;

int main() {

    int t,n, temp;
    map<int, int> A;

    cin>>t;
    FOR(t) {
        A.clear();

        cin>>n;
        FOR(n) {
            cin>>temp;
            A[temp]++;
        }

        int maxi=0;
        for(auto a:A) maxi=max(a.second, maxi);

        printf("Case %d: %d\n", i+1, maxi);
    }
}
