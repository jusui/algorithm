#include <iostream>
using namespace std;

// Linear Search
int linearSearch(int A[], int n, int key) {
  int i = 0;
  A[n] = key;
  while( A[i] != key ) i++;
  return i != n;
}

int main() {
  int A[10000+1], n, i, q, key, sum = 0;

  scanf("%d", &n); // Input element of A[]
  for ( i = 0; i < n; i++ ) scanf("%d", &A[i]); // Array A[i]

  scanf("%d", &q); // # of Element 
  for ( i = 0; i < q; i++ ) { 
    scanf("%d", &key);
    if ( linearSearch(A, n, key)  ) sum++;
  }
  printf("%d\n", sum);

  return 0;
}
