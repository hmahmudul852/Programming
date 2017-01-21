#include<cstdio>
#include<vector>
#include<stack>

using namespace std;

int solutions(vector<int> &A, vector<int> &B)
{
    int count = 0;

    stack<int>keep;


    for(int i=0;i<A.size();i++)
    {
        int cf=A[i];
        int cd=B[i];
        if(cd==1)
            keep.push(cf);

        if(!keep.empty() && cd==0)
        {
            while(!keep.empty() && cf>keep.top())
                keep.pop();

        }

        if(keep.empty() && cd==0)
            count++;
    }

    return count+keep.size();
}

int main()
{
    vector<int>A={4,3,2,1,5};
    vector<int>B={0,1,0,0,0};
    printf("%d",solutions(A,B));
    return 0;
}
