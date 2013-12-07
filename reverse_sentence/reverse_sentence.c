/*
Question:
Reverse a given sentence.

Given string:
"I attended the job fair on 5th Dec."
Output string:
"Dec. 5th on fair job the attended I"


*/

#include <stdio.h>
#include <string.h>

void reverse_str (int start, int end, char s[])
{
    char tmp = 0;

    while (start < end)
    {
       tmp = s[end];
       s[end] = s[start];
       s[start] = tmp;
       start ++; end --;
    }
}

void reverse_sentence (char s[])
{
    int len = strlen (s);
    int start = 0;
    int i = 0;

    reverse_str (0, len - 1, s);
   
    for (i = 0; i < len; i ++)
    {
        if (s[i] == ' ')
        { 
             reverse_str (start, i - 1, s);
             start = i + 1;
        }
    } 
   
}


int main (int argc, char *argv[])
{
/*   if (argc != 2)
   {
      printf ("Please Usage:%s <str>\n", argv[0]);
      return -1;
   }*/
   char ch[]="I was a software  engineer   in China";
   
   printf ("src:\n%s\n", ch);
   reverse_sentence (ch);
   printf ("dst:\n%s\n", ch);
   
   return 0;
}
