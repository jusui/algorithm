#include <cstdio>
#include <cstdlib>
using namespace std;

int n, A[20];

// if A[i] makes m -> true, else false.
int solve(int i, int m) {
  if ( m == 0 ) return 1; // Sum made
  if ( i >= n ) return 0;
  int res = solve( i + 1, m ) || solve( i + 1, m - A[i] );

  return res;
}

int main() {
  int i, q, Sum;

  scanf("%d", &n);
  for ( i = 0; i < n; i++ ) {
    scanf("%d", &A[i]);
  }

  scanf("%d", &q);
  for ( i = 0; i < q; i++ ) {
    scanf("%d", &Sum);
    if ( solve(0, Sum) )
      printf("yes\n");
    else printf("no\n");
    
  }
  
  return 0;
}
