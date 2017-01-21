/*WAP to input a name of 2 words as a string.
Then copy the last name in another array as string.
DO not use any library functions. Print both the strings.
*/

#include <stdio.h>
#include <string.h>
int main()
{


		char a[10],b[10];
		int i=0,j;
		gets(a);
		gets(b);
		while(a[i]!=' ')
        i++;
		for(j=0;a[i]!='\0';i++,j++)
		{
			b[j]=a[i+1];
        }
        puts(a);
		puts(b);

}
