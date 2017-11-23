#include <iostream>
#include <algorithm>
using namespace std;

// n max
const int MAX_N = 25;

// input
int n, W;
int w[MAX_N],  v[MAX_N];

// func(int i, int j)
int rec(int i, int j) {
  int res;

  if ( i == n ) {
    res = 0;
  }
  else if ( j < w[i] ) {
    res = rec( i + 1, j );
  }
  else {
    res = max( rec( i + 1, j),
	       rec( i + 1, j - w[i]) + v[i] );
  }
  return res;
  
}


// void solve() {
//   cout << rec( 0, W ) << endl;

// }

// int main() {
//   solve();

//   return 0;
// }

int main(void) {
  cout << rec(0, W) << endl;
  
  return 0;
}
