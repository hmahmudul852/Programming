#include<cstdio>
#include<vector>

using namespace std;

int solution(int N)
{
    int a,big=0;
    vector<int>binary;
    //for(int i=0;N>0;i++)
    while(N!=0)
    {
        a=N%2;
        N=N/2;
        binary.push_back(a);
    }
//
//    for(int i=0;i<binary.size();i++)
//        printf("%d",binary[i]);

    for(int i=0;i<binary.size();i++)
    {
        if(binary[i]==1)
        {
            int cou=0,j;
            for(j=i+1;binary[j]!=1;j++)
            {
                    cou++;
            }
            if(big<cou)
                big=cou;
            i=j-1;
        }
    }

    return big;
}

int main()
{
   // solution(1041);
    printf("%d\n",solution(9)==2);
    printf("%d\n",solution(529)==4);
    printf("%d\n",solution(20)==1);
    printf("%d\n",solution(1041)==5);
    printf("%d\n",solution(15)==0);

    return 0;
}
