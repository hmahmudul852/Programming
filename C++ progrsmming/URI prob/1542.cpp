#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int q,d,p,a;
    while(scanf("%d%d%d",&q,&d,&p) && q!=0)
    {
        a=((p*d)/abs(p-q))*q;
        if(a==1)
            printf("%d pagina\n",a);
        else
            printf("%d paginas\n",a);
    }
    return 0;
}
