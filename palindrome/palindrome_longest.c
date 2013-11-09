/*
Amazon Interview Question.
Q:

Find the length of the longest palindromes in a string.

Note that:
Manacher's algorithm is good at sovling this problem and get it down to O(n).

http://stackoverflow.com/questions/10468208/manachers-algorithm-algorithm-to-find-longest-palindrome-substring-in-linear-t


 
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

    char *pLongest = NULL;
    int longest_strlen = 0;
    

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
		if (longest_strlen < j)
		{
		    longest_strlen = j;
		    pLongest = pStr + i;

		}
		
		num_of_palin ++;
	    }
	}
    }

    if (pLongest)
    {	
        print_palindromes (pLongest, longest_strlen);
    }
    else
    {
	printf ("Can't find the palindrome string!\n");
    }
    return 0;
}
