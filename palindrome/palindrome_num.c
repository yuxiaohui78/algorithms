/*
Amazon Interview Question.
Q:

Find number of palindromes in a string.

A:

./palindrome_num abcdefedcb
Input string:
abcdefedcb

Parlindromes:
bcdefedcb
cdefedc
defed
efe

Number of palindromes:4

 
*/

#include <stdio.h>
#include <string.h>

int is_palindromes( char * str, int str_len)
{
     int len = str_len;
     int i = 0;

     for ( i = 0; i < len/2; i ++)
     {
         if (str[i] == str[len - i - 1])
	    continue;
	 else
	    return 0;
     }

     return 1;	     
}

void print_palindromes (char *str, int len)
{
    int i = 0; 
    for (i = 0; i < len; i ++)
    {
	printf("%c", *(str+i));
    }
    printf ("\n");
}

int main (int argc, char *argv[])
{
    int num_of_palin = 0;
    int i = 0;
    int len = 0;
    char *pStr = argv[1];
    

    if (argc != 2)
    {
	printf ("Need Parameter string!\n");
	return 1;
       
    }

    printf ("Input string:\n%s\n\n", pStr);

    len = strlen (pStr);

    printf ("Parlindromes:\n");

    for (i = 0; i < len; i ++)
    {
	int j = 0;
	int sub_str_len = strlen(pStr + i);

        for (j = 2; j <= sub_str_len; j ++)
	{
	    if (is_palindromes (pStr + i, j))
	    {
		print_palindromes (pStr + i, j);
		
		num_of_palin ++;
	    }
	}
    }

    printf ("\nNumber of palindromes:%d\n", num_of_palin );
  
    return 0;
}
