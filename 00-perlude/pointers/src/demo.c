#include <stdio.h>

void updateValue(int y) {
  y = y + 5;
}

int main() {
  
  int x = 10;
  printf("Before function executed: %d\n", x);

  updateValue(x);

  printf("After function executed %d\n", x);

  return 0;
}
