#include<cstdio>
#include<vector>

using namespace std;

void findpath(vector<vector<int> >matrix)
{
    for(int i=0;i<matrix.size();i++)
        for(int j=0;j<=matrix.size();j++)
            printf("%d",matrix[i][j]);
}

int main()
{
    findpath({{1,2,3},
             {4,5,6}});
    return 0;
}
