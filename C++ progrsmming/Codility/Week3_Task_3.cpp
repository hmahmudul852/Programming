#include<cstdio>
#include<vector>
using namespace std;

int solution(vector<int> &A)
{
    for(int i=0;i<A.size();i++)
    {
        int count=0;
        for(int j=0;j<A.size();j++)
        {
            if(A[i]==A[j])
            {
                count++;
            }
        }

        if(count==1)
            return A[i];
    }
}

int main()
{
    vector<int>A={9,3,9,3,9,7,9};
    int b=solution(A);
    printf("%d",b);

    return 0;
}
