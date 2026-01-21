#include <stdio.h>

int main() {
  
  int x = 10, y = 20, z[10];
  int *ip;
  printf("Value of x: %d, value of y: %d\n", x, y);

  ip = &x;
  printf("The address of x is %p\n", ip);

  y = *ip;
  printf("New value of y is: %d\n", y);

  y = *ip + 1;
  printf("The new value of y is: %d\n", y);

  *ip = 0;
  printf("The new valus of x is: %d\n", x);

  ip = &z[0];
  printf("The address of array z is: %p\n", ip);

  int *ap;
  ap = z;
  printf("The address of array z is: %p\n", ip);

  return 0;
}
