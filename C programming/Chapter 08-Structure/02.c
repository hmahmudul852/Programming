#include<stdio.h>

struct cor
{
    int x,y;
};

int main()
{
    printf("How many coordinates u wanna enter: ");
    int a;
    scanf("%d",&a);
    struct cor c[a];
    int i;
    for(i=0;i<a;i++)
    {
        printf("Enter coordinate no %d\n",i+1);
        scanf("%d%d",&c[i].x,&c[i].y);
    }

    int flag=1;
    for(;;)
    {
        if(flag==1)
        {
            printf("\nEnter two coordinates that u want to find the distance: ");
            int b,d,x,y;
            double res;
            scanf("%d%d",&b,&d);
            x=pow((c[d-1].x-c[b-1].x),2);
            y=pow((c[d-1].y-c[b-1].y),2);
            res=sqrt(x+y);
            printf("Distance= %lf",res);
        }
        else
            break;

        printf("\nDo u want to try again?(y/n)\n");
        getchar();
        char a;
        a=getchar();
        if(a=='y')
            flag=1;
        else
            flag=0;
    }
    return 0;
}
