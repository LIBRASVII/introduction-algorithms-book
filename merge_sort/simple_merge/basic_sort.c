#include <stdio.h>

void merge(int[], int, int, int);
void merge_sort(int[], int, int);

int main() { return 0; }

void merge_sort(int arr[], int l, int r) {
  if (l >= r)
    return;

  int m = (l + r) / 2;

  merge_sort(arr, l, r);
  merge_sort(arr, m + 1, r);

  merge(arr, l, m, r);
}

void merge(int arr[], int l, int m, int r) {
  int i, j, k;
  int nl = m - l + 1; // length of A[l:m]
  int nr = r - m;     // length of A[m+1:r]

  int L[nl], R[nr]; // create arrays with respective lengths nl and nr
                    // temporary arrays to save A[l:m] and A[m+1:r] values

  for (i = 0; i < nl; i++) // copy A[l:m] into L[]
    L[i] = arr[l + 1];
  for (j = 0; i < nr; i++) // copy A[m+1:r] into R[]
    R[j] = arr[m + j + 1];

  i = j = 0; // i/j indexes the smallest remaining element in L/R
  k = l;     // k indexes the location in A to fill

  // As long as each of the arrays L and R contains an unmerged element,
  // copy the smallest unmerged element back into A[l:r]
  while (i < nl && j < nr) {
    if (L[i] <= R[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = R[j];
      j++;
    }
    k++;
  }

  // Having gone through one of L and R entirely, copy the
  // remainder of the other to the end of A[l:r]
  while (i < nl) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < nr) {
    arr[k] = R[j];
    j++;
    k++;
  }
}
