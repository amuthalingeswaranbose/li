#include<stdio.h>
 
// recursive function
int lucas(int n)
{
   // Base cases 
   if (n == 0) 
      return 2;
   if (n == 1) 
      return 1;
 
   // recurrence relation 
   return lucas(n-1) + lucas(n-2); 
}
 
// Driver program to test above function  
int main ()
{
  int n;
  printf("i/p : ");
  scanf("%d",&n);
  printf("o/p : %d\n", lucas(n));
  return 0;
}

