#include <iostream>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
  int n, q, t;
  string name;

  // STL queue, pair
  queue<pair<string, int> > Q; // Process queue
  // n : # of queue, q : Default element
  cin >> n >> q;

  // Add all process of queue
  for ( int i = 0; i < n; i++ ) {
    cin >> name >> t;
    Q.push(make_pair(name, t));
  }

  pair<string, int > u;
  int elaps = 0, a; // Total process time

  // Simulation
  while ( !Q.empty() ) {
    u = Q.front();
    Q.pop(); // Delete first element of queue
    a = min(u.second, q); // Process q or time==u.t
    u.second -= a; //  Calcurate time to process
    elaps += a; // Add process time
    if ( u.second > 0 ) {
      Q.push(u); // Add queue if not complete
    } else {
      cout << "pair<string> " << u.first << " " << "pair<int> " << elaps << endl;
    }
  }

  return 0;
}


