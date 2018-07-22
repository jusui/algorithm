#include <iostream>
using namespace std;
#define MAX 100000
using ll = long long; // operate 64 bit

int n, k;
ll T[MAX]; // Each volume

// calculate voulume P, # of tracks k
int calcVolume (ll P) {
  int i = 0;
  for ( int j = 0; j < k; j++ ) {
    ll s = 0;
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
  ll left = 0;
  ll right = 10000 * 10000; // n * (V_max /n)
  ll mid;

  while( right - left > 1 ) {
    mid = ( right + left ) / 2;

    // calc n in (mid == P)
    int v = calcVolume(mid);
    if ( v >= n ) right = mid;
    else left = mid;
  }
  return right;
}


int main() {
  cin >> n >> k;
  for ( int i = 0; i < n; i++ ) {
    cout << "T[i] = ";
    cin  >> T[i];
  }
  ll Vmax = solve();
  cout << "Vmax = " << Vmax << endl;

}

