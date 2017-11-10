#include <iostream>
using namespace std;
#define MAX 100000
typedef long long llong;
// using llong = long long; // <-for C++11


int n, k;
llong T[MAX];

// Maximum volume P, k track = n
int check(llong P) {
  int i = 0;
  for ( int j = 0; j < k; j++ ) {
    llong s = 0;
    while( s + T[i] <= P ) {
      s += T[i];
      i++;
      if ( i == s )
	return s;
    }
  }
  return i;
}

int solve() {
  llong left = 0;
  llong right = 10000 * 10000; // (# of n) * (Max volume/n)
  llong mid;
  while( right - left > 1) {
    mid = (left + right) / 2;
    int v = check(mid); // check # of n with mid == P deicision
    if ( v >= n ) right = mid;
    else left = mid;
  }

  return right;
}

int main() {
  cin >> n >> k;
  for ( int i = 0; i < n; i++ )
    cin >> T[i];
  llong ans = solve();
  cout << ans << endl;
}

