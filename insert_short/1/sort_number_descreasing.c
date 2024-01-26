// Only the first number (5) don't change your position

#include <stdio.h>

int main() {
  int array[] = {5, 2, 4, 6, 1, 3};
  int n = sizeof(array) / sizeof(array[0]);

  for (int i = 1; i < n; i++) {
    // printf("\nA[] => %d\n", array[i]);
    int key = array[i]; // take each value from array
    int j = i - 1;      // take the value from the loop for
    while (j > 0 && array[j] < key) {
      array[j + 1] = array[j]; // move the value inside array
      j = j - 1;
    }
    array[j + 1] = key;
  }

  for (int i = 0; i < n; i++) {
    printf("%d ", array[i]);
  }

  return 0;
}
