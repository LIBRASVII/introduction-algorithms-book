#include <stdio.h>

int main() {
  int array[] = {5, 2, 4, 6, 1, 3};
  int n;

  for (int i = 0; i < array[n]; i++) {
    int key = array[i];
    int j = 1 + i;
    while ((j > 0) && (array[j] > key)) {
      array[j - 1] = array[j];
      j = j + 1;
    }
    array[j - 1] = key;
  }

  for (int i = 0; i < array[n]; i++) {
    printf("%d ", array[i]);
  }

  return 0;
}
