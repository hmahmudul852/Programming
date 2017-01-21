#include<cstdio>

using namespace std;

int main(int argc,const char * argv[])
{
    int firstNum;
    int secondNum;

    scanf("%d %d",&firstNum,&secondNum);

    if(firstNum < secondNum)
    {
        printf("%d",firstNum);
    }

    else
    {
        printf("%d",secondNum);
    }
    return 0;
}
