/*WAP to replace the lowercase letter into
uppercase and the uppercase letters into
lowercase and print the string.
*/

#include <stdio.h>
int main()
{
	while(1)
    {
		char a[10];
		gets(a);
		int i=0;

		while(a[i]!='\0')
        {
			if(a[i]>='a' && a[i]<'z') a[i]=a[i]-32;
			else if(a[i]>='A' && a[i]<='Z') a[i]=a[i]+32;
			i++;
		}
		puts(a);
    }
}
