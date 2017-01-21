#include<cstdio>
#include<algorithm>

using namespace std;
int main()
{
    int s;
    printf("Enter the size of array: ");
    scanf("%d",&s);
    int a[s];
    int b,c,d,e,f,g;
    for(b=0;b<s;b++)
        scanf("%d",&a[b]);
    for(c=0;c<s;c++)
    {
        if(a[c]<a[c+1])
        {
            swap(a[c],a[c+1]);
        }
    }
    for(e=0;e<s;e++)
        printf("%d ",a[e]);
    return 0;
}


