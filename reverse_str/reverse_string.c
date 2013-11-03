/*
Question:

Reverse a string without using any temporary variable. 
Suppose {{char str[] = "Hello"; then str[] = "olleH";}}}. 
I told him we can "shift H to o then o to H", similarly so on. But could able to write the code.

*/

/*
The solution:
This is a xor swap algorithm.
*/

#include <stdio.h>
#include <string.h>

void reverse (char s[])
{
   int i = 0, j = 0; 
   int len = strlen (s);
   for (i = 0, j = len - 1; i < j ; i ++ , j--) 
   {
      s[i] ^= s[j];
      s[j] ^= s[i];
      s[i] ^= s[j];
   }
}

int main (int argc, char ** argv)
{

   char str[]= {"I took part in an activity for crossing over Qian Tang River."};
   char str2[]={"This is an even length string!"};
   printf ("len=%d. \n%s\n", strlen(str),str);
   reverse (str);
   printf ("%s\n", str);

   printf ("len=%d. \n%s\n", strlen(str2),str2);
   reverse (str2);
   printf ("%s\n", str2);

   return 0;
}
