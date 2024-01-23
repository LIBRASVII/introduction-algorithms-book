#include <stdio.h>

int main() {
  int array[] = {5, 2, 4, 6, 1, 3};
  int n = sizeof(array) / sizeof(array[0]);

  for (int i = 1; i < n; i++) {
    // printf("\nA[] => %d\n", array[i]);
    int key = array[i]; // take each value from array
    printf("\nkey => %d\n", key);
    int j = i - 1; // take the value from the loop for
    printf("\ni => %d\n", i);
    printf("\nj => %d\n", j);
    printf("\nA[j] => %d\n", array[j]);
    while (j > 0 && array[j] < key) {
      printf("inside while");
      array[j + 1] = array[j]; // move the value inside array
      printf("\nWhile A[j] => %d\n", array[j]);
      printf("\nwhile j => %d\n", j);
      j = j - 1;
      printf("\nbelow while j => %d\n", j);
    }
    array[j + 1] = key;
  }

  for (int i = 0; i < n; i++) {
    printf("%d ", array[i]);
  }

  return 0;
}
