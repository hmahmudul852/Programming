#include<stdio.h>
#include<string.h>

int str_sub(char str1[100],char str2[100])
{
    int a=strlen(str1),b=strlen(str2);
    int i,j,flag=0;

    for(i=0;i<a;i++)
    {
            if(str1[i]==str2[0])
            {
                int x=i,y=0;
                for(x,y;y<b;x++,y++)
                {
                        if(str1[x]==str2[y])
                        {
                            flag=1;
                        }
                        else
                        {
                            flag=0;
                            break;
                        }
                }

            }
            if(flag==1)
                break;
    }

    return flag;
}

int main()
{
    char str1[100],str2[100];
    printf("Enter both of ur string: ");
    gets(str1);
    gets(str2);

     if(str_sub(str1,str2)==1)
        printf("YES");
     else
         printf("NO");
    return 0;
}

