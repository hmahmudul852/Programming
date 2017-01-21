#include <stdio.h>

int main()
{
   char string[23] ="fresh2refresh n string";
   int i;

   for(i=0;i<23;i++)
   {
      if(isprint(string[i]))
         putchar(string[i]);
         //printf("%c",string[i]);
   }
   return 0;
}
