#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int A[10000], n; // A[]:array, n:# of int

int main() {
  cin >> n;
  for ( int i = 0; i < n; i++ ) {
    scanf("%d", &A[i]);
  }

  // q:# of int, k:array T[], sum:# of same elements
  int q, k, sum = 0;
  cin >> q;
  for ( int i = 0; i < q; i++ ) {
    scanf("%d", &k);

    // STL lower_bound
    if ( *lower_bound(A, A + n, k) == k )
      sum++;
  }

  cout << sum << endl;
  
  return 0;
}

