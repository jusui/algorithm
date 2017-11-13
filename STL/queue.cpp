#include <cstdio>
#include <cstring>
#define LEN 100005
using namespace std;

// struct : process
struct P {
  char name[100];
  int t;
};

P Q[LEN];
int head, tail, n;

void enqueue(P x){
  Q[tail] = x;
  tail = (tail + 1) % LEN;
}

P dequeue() {
  P x = Q[head];
  head = (head + 1) % LEN;
  return x;
}

int min(int a, int b) {
  // if (a < b) true->a, false->b
  return a < b ? a : b;
}

int main() {
  int elaps = 0, c;
  int i, q;
  P u;
  // cin(n, q)
  scanf("%d %d", &n, &q);

  // Add all process in the queue
  for ( i = 0; i <= n; i++ ) {
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
  }
  head = 1;
  tail = n + 1;

  // Simulation
  while( head != tail ) {
    u = dequeue();
    c = min(q, u.t); // Process min time u.t
    u.t -= c;        // Calculate time
    elaps += c;      // Add process time
    if ( u.t > 0 )
      enqueue(u); // if not complete, add queue
    else {
      printf("%s %d\n", u.name, elaps);
    }
  }
  
  return 0;
}


