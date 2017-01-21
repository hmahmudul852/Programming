#include<bits/stdc++.h>
#define FOR(n) for(register int i=0; i<(int)n; i++)
#define DO(function, A) function(A.begin(), A.end());
#define RDO(function, A) function(A.rbegin(), A.rend());
using namespace std;

int main() {

    int T,Q, P, D, A, S;
    cin>>T;
    FOR(T) {
        cin>>Q>>P>>D>>A>>S;

        printf("Case %d: ", i+1);
        if(S<=P*A && S>=-(A*D) ){
            if ( (P+D)==0 && S==0)  cout << "It may happen\n";
            else if((P+D)==0 && S!=0) cout << "Review needed\n";
            else {
                int temp=((P*A)-S)/(P+D);
                ( P*(A-temp) - (temp*D) == S ) ? cout << "It may happen\n" : cout << "Review needed\n";
            }
        }
        else cout << "Review needed\n";
    }
}
