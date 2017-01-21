#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);

    getchar();

    char in[1000];

    while(a--)
    {
        gets(in);

        int i,count=0,flag=0;

        for(i=0;in[i]!='\0';i++)
        {
            if(in[i]=='0' && flag==0)
                continue;
            else
            {
                count++;
                flag=1;
            }
        }
        if(count==0)
            count=1;
        printf("%d\n",count);
    }
    return 0;
}
