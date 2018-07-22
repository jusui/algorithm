#include <iostream>
#include <cstdio>
using namespace std;

// Seleciton Algorithm(ALDS1_2_B)
int selectionSort(int A[], int N) {
  int i, j, minj, sw = 0;
  for ( i = 0; i < N-1; i++ ) {
    minj = i;
    for ( j = i; j < N-1; j++ ) {
      if ( A[j] < A[minj] ) minj = j;
    }
    // t = A[i];
    // A[i] = A[minj];
    // A[minj] = t;
    swap(A[i], A[minj]);
    // Count Selection Sorts
    if ( i != minj ) sw++;
  }
  return sw;
}

int main() {
  int A[100], N, i, sw;

  scanf("%d", &N);
  for ( i = 0; i < N; i++ )
    scanf("%d", &A[i]);

  sw = selectionSort(A, N);

  for ( i = 0; i < N; i++ ) {
    if ( i > 0 ) printf(" ");
    printf("%d", A[i]);
  }
  printf("\n");
  printf("%d\n", sw);

  return 0;
}

