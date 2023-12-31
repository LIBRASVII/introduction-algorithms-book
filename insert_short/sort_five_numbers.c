#include <stdio.h>

int main() {
  int array[] = {5, 2, 4, 6, 1, 3};
  /* Calcula o número de elementos no array dividindo
    o tamanho total do array pelo tamanho de um elemento.*/
  int n = sizeof(array) / sizeof(array[0]);

  for (int i = 1; i < n; i++) {
    int key = array[i];
    int j = i - 1;
    while (j >= 0 && array[j] > key) {
      array[j + 1] = array[j];
      j = j - 1;
    }
    array[j + 1] = key;
  }
  for (int i = 0; i < n; i++) {
    printf("%d ", array[i]);
  }

  return 0;
}
