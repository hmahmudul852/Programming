#include<bits/stdc++.h>
#define MAX 100001
using namespace std;

int n;
int arr[MAX];

int SumPair(int j, int k)
{
    int first, second;
    if (arr[j] > arr[j+1])
    {
        first = arr[j];
        second = arr[j+1];
    }
    else
    {
        first = arr[j+1];
        second = arr[j];
    }

    for (int i = j+2; i<=k; i ++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }

        else if (arr[i] > second && arr[i] != first)
            second = arr[i];
    }
    return (first + second);
}


int main()
{
    scanf("%d",&n);
    for(int i=1; i<=n; i++) scanf("%d", &arr[i]);

    int t;
    scanf("%d",&t);
    getchar();

    while(t--)
    {
        char c;
        int a,b;
        scanf("%c %d %d", &c, &a, &b);
        getchar();

        if(c=='U')
            arr[a]=b;
        else if(c=='Q')
        {
            printf("%d\n",SumPair(a,b));
        }
    }
    return 0;
}
