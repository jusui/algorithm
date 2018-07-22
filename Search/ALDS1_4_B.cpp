#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int A[1000000], n;

int main() {
  scanf("%d", &n);
  for ( int  i = 0; i < n; i++ ) {
    scanf("%d", &A[i]);
  }

  int q, k, sum = 0;
  scanf("%d", &q);
  for ( int i = 0; i < q; i++ ) {
    scanf("%d", &k);

    // STL : lower_bound()
    if ( *lower_bound(A, A + n, k) == k )
      sum++;
  }

  //  cout << "sum = " << sum << endl;
  scanf("%d\n", sum);

  return 0;
}


