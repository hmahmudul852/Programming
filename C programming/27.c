/*WAP to input a name of 2 words as a string.
Then copy the first name in another array as string.
DO not use any library functions. Print both the strings.
*/

#include <stdio.h>
#include<string.h>
int main()
{

		char a[10],b[10];
		gets(a);
		gets(b);
		int i=0;
		while(a[i]!=' ')
            {
				b[i]=a[i];
				i++;
            }
		b[i]='\0';
		puts(a);
		puts(b);

}
