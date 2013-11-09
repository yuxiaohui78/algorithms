/*
Facebook Interview Question.

Question:

We are given a set of integers with repeated occurences of elements. For Example, S={1,2,2}. 
We need to print the power set of S ensuring that the repeated elements of the power set are printed only once. 
For the above S, the power set will be {NULL, {1}, {2}, {2}, {1,2}, {1,2}, {2,2}, {1,2,2}}. So, as per the question requirements, we need to print {NULL, {1}, {2}, {1,2}, {2,2}, {1,2,2}}

Analysis:
Maped subset
for example (a,b,c)

a can be mapped as 0 or 1
b can be mapped as 0 or 1
c map be mapped as 0 or 1

(1,1,1)->(a,b,c)
(1,1,0)->(a,b  )
(1,0,1)->(a,  c)
(1,0,0)->(a    )
(0,1,1)->(  b,c)
(0,1,0)->(  b  )
(0,0,1)->(    c)
(0,0,0)-> null

*/

#include <stdio.h>
#include <math.h>

void print_subset(int *org_set, unsigned int set_map)
{
    unsigned int i = 0;

    printf ("{");

    for (i = 0; set_map; i ++)
    {
         if (set_map & 0x1)
         {
             printf ("%d,", org_set[i]);
         }
         set_map >>= 1;
    }
    printf ("\b}");
}

int main (int argc, char *argv[])
{
   int org_set[] ={1,2,3, 9,300,56, 7, 90};
   unsigned int set_map = pow(2,sizeof(org_set)/sizeof(int));
   
   unsigned int i = 0;
   
   printf ("The number of subset is : %d\n", set_map);
   
   printf ("{NULL}\n");

   for (i = 1; i < set_map; i ++)
   {
      print_subset (org_set, i);
      printf ("\n");
   }

   return 0;
}
