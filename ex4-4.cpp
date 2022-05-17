#include <stdio.h>
#include <iostream>
using namespace std;

int
main ()
{
  int r;
  int p = 3.1415926;
  int A;
  int C;
  int bool_value;
  /*
  printf ("Please input x:\n");
  scanf ("%d", &x);
  */
  printf ("Please input r:\n");
  scanf ("%d", &r);

  if (r >= 0)
    {
      printf (" A = πr² = %d \n ", A = p * r * r);
      printf (" C = 2πr = %d \n", C = 2 * p * r);
    }
  else
    {
      printf ("Error,Please reinput r");
    }
  return 0;
}
