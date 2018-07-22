#include <iostream>
using namespace std;

/* Output of element in array */
void trace(int A[], int N) {
  int i;
  for ( i = 0; i < N; i++ ) {
    if ( i > 0 ) cout << " " << endl;
    printf("%d", A[i]);
  }
  printf("\n");
}

/* insertion Sort algorithm */
void insertionSort(int A[], int N) {
  /* A[N]:SizeがNの整数型配列
     i:未ソート部分の先頭を示すループ変数
     v:A[i]を一時的に保持する変数
     j:Sort済み部分列からvを挿入するための位置を探すループ変数 */
  int i, j, v; 
  for ( i = 0; i < N; i++ ) {
    v = A[i];
    j = i - 1;
    while ( j >= 0 && A[j] > v ) {
      A[j + 1] = A[j];
      j--;
    }
    A[j + 1] = v;
    trace(A, N);
  }
}

int main() {
  int N, i, j;
  int A[100];

  scanf("%d", &N);
  for ( i = 0; i < N; i++ ) scanf("%d", &A[i]);
  
  trace(A, N);
  insertionSort(A, N);

  return 0;
}
