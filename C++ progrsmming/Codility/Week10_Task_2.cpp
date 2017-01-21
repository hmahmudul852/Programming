#include<bits/stdc++.h>

using namespace std;

int solution(vector<int> &A)
{
    int i,n ;

    n = A.size();

    if (3==n) return 0;

    vector<int>  max_sum_end(n,0);
    vector<int>  max_sum_start(n,0);

    for (i=1; i< (n-1); i++) // i=0 and i=n-1 are not used because x=0,z=n-1
    {
        max_sum_end[i]   = max ( 0 , max_sum_end[i-1] + A[i]  );
    }

    for (i=n-2; i > 0; i--) // i=0 and i=n-1 are not used because x=0,z=n-1
    {
        max_sum_start[i]   = max ( 0 , max_sum_start[i+1] + A[i]  );
    }

    int maxvalue,temp;
    maxvalue = 0;

    for (i=1; i< (n-1); i++)
    {
        temp = max_sum_end[i-1]  + max_sum_start[i+1];
        if ( temp >  maxvalue) maxvalue=temp;
    }

    return maxvalue ;
}
