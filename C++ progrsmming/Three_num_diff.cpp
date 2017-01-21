#include <cstdio>

using namespace std;

int main(int argc, const char * argv[])
{
    int firstNum;
    int secondNum;
    int thirdNum;

    while(1){
    scanf("%d %d %d",&firstNum,&secondNum,&thirdNum);

    if((firstNum != secondNum) && (firstNum != thirdNum) && (secondNum != thirdNum))
        printf("YES\n");

    else
        printf("NO\n");

    }

    return 0;
}


