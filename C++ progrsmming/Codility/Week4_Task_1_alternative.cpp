#include<cstdio>
#include<vector>

using namespace std;

int solutions(vector<int> &A, vector<int> &B)
{
    int cou=0,i,j;
    while(!A.empty())
    {
            if(A[0]>A[1] && B[0]==1 && B[1]==0)
            {
                A.erase(A.begin()+1);
                B.erase(B.begin()+1);

            }
            else if(A[0]<A[1] && B[0]==1 && B[1]==0)
            {
                A.erase(A.begin()+0);
                B.erase(B.begin()+0);

            }
            else
            {
                cou++;
                A.erase(A.begin()+0);
                B.erase(B.begin()+0);
            }
    }

    return cou;
}

int main()
{
    vector<int>A={4,5};
    vector<int>B={0,1};
    printf("%d",solutions(A,B));
    return 0;
}
