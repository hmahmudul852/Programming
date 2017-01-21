#include<cstdio>
#include<vector>

using namespace std;

int solution(int N)
{
    int a,big=0;
    vector<int>binary;
    vector<int>nbinary;
    while(N!=0)
    {
        a=N%2;
        N=N/2;
        binary.push_back(a);
    }

    int f=0;
    for(int i=0; i<binary.size(); i++)
    {
        if(binary[i]==1 && f==0)
        {
            nbinary.push_back(binary[i]);
            f=1;
        }
        else if(f==1)
            nbinary.push_back(binary[i]);
    }

    for(int i=0;i<nbinary.size();i++)
    {
        int c=0;
        for(int j=i+1; j<nbinary.size();j++)
        {
            if(nbinary[j]==0)
                c++;
            else
            {
                i=j-1;
                break;
            }
        }
        if(c>big)
            big=c;
    }

    return big;
}

int main()
{
    printf("%d\n",solution(9)==2);
    printf("%d\n",solution(529)==4);
    printf("%d\n",solution(20)==1);
    printf("%d\n",solution(1041)==5);
    printf("%d\n",solution(15)==0);

    return 0;
}
