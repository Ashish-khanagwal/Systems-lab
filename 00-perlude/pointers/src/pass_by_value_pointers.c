#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

/* * void swap(int a, int b) { */
/*   int temp = a; */
/*   a = b; */
/*   b = temp; */
/* } */

int main() {
  
  int a = 10, b = 20;
  printf("The values of a & b before swapping: %d, %d\n", a, b);
  printf("The addresses of a & b are %p, %p\n", &a, &b);

  swap(&a, &b);
  /* swap(a, b); // 10, 20 */
  printf("The values of a & b after swapping: %d, %d\n", a, b);

  return 0;
}
