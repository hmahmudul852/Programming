#include<cstdio>
#include<stack>

using namespace std;

int main()
{
    stack<int>st;
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        int keep;
        scanf("%d",&keep);
        st.push(keep);
    }

    while(!st.empty())
    {
        printf("%d ",st.top());
        st.pop();
    }
    return 0;
}
