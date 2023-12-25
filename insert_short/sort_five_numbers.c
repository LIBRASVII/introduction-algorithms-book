#include <stdio.h>

int main() {
    int array[] = {5, 2, 4, 6, 1, 3};
    int key, A[] = {};
    int i = 0;
    int j = 0;

    for (i = 2; i < array[i]; i++) {
        key = A[i];
        j = i - 1;
        while (j > 0 && A[j] > key) {
            A[j+1] = A[j];
            j = j - 1;
        }
        A[j+1] = key;
    }
    for (i = 0; i < array[i]; ++i) {
        printf("%d", array[i]);
    }

    return 0;
}
