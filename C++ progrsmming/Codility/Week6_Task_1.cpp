#include<cstdio>
#include<cstring>

int solution(int N,int M)
{
    int ar[N],cou=0,i=0,next=0;
    memset(ar,0,N);
    while(ar[next]!=1)
    {
        ar[next]=1;
        cou++;
        next=(next+M)%N;
    }

    return cou;
}

int main()
{
    printf("%d",solution(10,4));
    return 0;
}
