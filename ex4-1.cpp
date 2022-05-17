#include <stdio.h>
#include <iostream>
using namespace std;

int main ()
{
  int x, y;
  int bool_value;

  printf ("Please input x:\n");
  scanf ("%d", &x);
  printf ("Please input y:\n");
  scanf ("%d", &y);

  bool_value = (x > y);
  printf (" x > y ==> %d \n ", bool_value);
  bool_value = (x < y);
  printf (" x < y ==> %d \n ", bool_value);
  bool_value = (x > 5 && x < 10);
  printf (" x > 5 &&  x < 10 ==> %d \n ", bool_value);
  cout<<"Hello world";
  return 0;
}
