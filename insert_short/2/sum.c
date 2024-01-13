#include <stdio.h>

int main() {
  int sum = 0;
  int array[] = {1, 3, 7, 9};
  int n = sizeof(array) / sizeof(array[0]);

  for (int i = 0; i < array[n]; i++) {
    sum = sum + array[n];
    return sum;
  }

  for (int i = 0; i < array[n]; i++) {
    printf("%d ", array[i]);
  }

  return 0;
}
