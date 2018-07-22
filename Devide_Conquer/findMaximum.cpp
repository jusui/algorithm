#include <iostream>
using namespace std;

int findMaximum(int A[], int l, int r) {
  int u, v, x = 0;
  int m = ( l + r ) / 2;
  if ( l == r - 1 )
    return A[l];

  else {
    u = findMaximum(A, l, m);
    v = findMaximum(A, m, r);
    x = max(u, v);
    }
  
  return x;
}

int main() {
  int A[100000+1], n, i, l, r = 0;

  scanf("%d", &n);
  for ( int i = 0; i < n; i++ ) {
    scanf("%d", &A[i]);
  }

  scanf("%d", &l) && scanf("%d", &r);
  if ( findMaximum(A, l, r) )
    printf("%d\n", findMaximum(A, l, r));
  
  return 0;
}
