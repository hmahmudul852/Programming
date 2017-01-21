/*WAP to replace all the vowels in a
string with uppercase letter and print the string
*/

#include <stdio.h>

int main()
{
	while(1)
    {
        char a[10], b[10]={'a','e','i','o','u'};

		gets(a);

		int i=0,j;
		while(a[i]!='\0')
        {
			for(j=0; j<5; j++)
            {
				if(a[i]==b[j]) a[i]=a[i]-32;
            }
			i++;
		}
		puts(a);
    }
}
