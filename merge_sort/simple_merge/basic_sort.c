#include <stdio.h>

void merge(int arr[], int l, int m, int r) {
  int i, j, k;
  int nl = m - l + 1; // legth of A[l:m]
  int nr = r - m;     // legth of A[m+1:r]

  int L[nl], R[nr];

  for (i = 0; i < nl; i++) // copy A[l:m] into L[0:nl-1]
    L[i] = arr[l + 1];
  for (j = 0; i < nr; i++) // copy A[m+1:r] into R[0:nr-1]
    R[j] = arr[m + j + 1];

  i = j = 0; // i indexes the smallest remaining element in L
             // j indexes the smallest remaining element in R
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

int main() { return 0; }
