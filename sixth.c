#include <stdio.h>

int main(void) {
  int num, first = 0, second = 1, next, c;

  printf("Enter the number of terms: ");
  scanf("%d", &num);

  printf("First %d terms of Fibonacci series are:\n", num);

  for (c = 0; c < num; c++) {
    if (c <= 1) {
      next = c;
    }
    else {
      next = first + second;
      first = second;
      second = next;
    }
    printf("%d\n", next);
  }

  return 0;
}
