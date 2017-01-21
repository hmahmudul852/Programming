#include<iostream>

using namespace std;

int solution(int A,int B,int K)
{
    unsigned long int result = 0;

    if (A%K == 0)
    {
        result = ((B-A)/K)+1;
    }
    else
    {
        result = (B/K - ((A/K)+1))+1;
    }

    return (int)result;

}
