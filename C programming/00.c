#include<stdio.h>
#include<ctype.h>

int main()
{
	int i ,n,count ;
	scanf("%d",&n);
    getchar();
	char str[10000];


	while(n--)
	{
	    count=1;
		gets(str);
		for(i=0 ; str[i]!='\0' ; i++)
		{
			if(str[i]==' ')
			{
				if(isdigit(str[i-1])!=0)
				{
					count++;
				}
			}
		}
		printf("%d\n",count);
	}
	return 0;

}
