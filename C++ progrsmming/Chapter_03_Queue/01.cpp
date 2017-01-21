#include<cstdio>
#include<queue>
using namespace std;

int main()
{
    queue<int>ha;
    int a;
    while(1)
    {
        int keep;
        scanf("%d",&keep);
        if(keep==0)
            break;
        else
            ha.push(keep);
    }
    while(!ha.empty())
    {
        printf("%d ",ha.front());
        ha.pop();
    }
    return 0;
}
