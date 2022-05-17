#include <stdio.h>
#include <iostream>
using namespace std;

int
main ()
{
  int x, y, z;
  int bool_value;

  printf ("Please input x:\n");
  scanf ("%d", &x);
  printf ("Please input y:\n");
  scanf ("%d", &y);

  if (x > y)
    {
      printf (" x > y ==> %d \n ", x > y);
    }
  else if (x < y)
    {
      printf (" x < y ==> %d \n ", x < y);
    }
  else
    {
      printf (" x == y \n ");
    }
    
  z = (x > y) ? x : y;
  printf ("z =  %d \n", z);
  
  return 0;
}
