#include <cstdio>
using namespace std;

int i, A[50];

int solve(int i, int m) { // m : num1 + num2
  // Regression function
  if ( m == 0 ) return 0;
  if ( i >= m ) return 1;
  int res = solve( i + 1, m ) || solve( i + 1, m - A[i] );
  return res;
}

int main() {
  int n, q, M;

  scanf("%d", &n);
  for ( int i = 0; i < n; i++ ) {
    scanf("%d", &A[i]);
  }

  scanf("%d", &q);
  for ( int i = 0; i < q; i++ ) {
    scanf("%d", &M);
    if ( solve(0, M) ) {
      //      printf("%d", solve(0, M));
      printf("yes\n");
    }
    else printf("no\n");
  }

  return 0;
}
