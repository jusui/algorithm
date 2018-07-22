#include <cstdio>
#include <algorithm>
#include <list>
using namespace std;

int main() {
  int n, x;
  char com[20];
  list<int> L;

  // Input # of process
  scanf("%d", &n);

  for ( int i = 0; i < n; i++ ) {
    scanf("%s", com);

    if ( com[0] == 'i' ) { // insert
      scanf("%d", &x);
      L.push_front(x);
    }
    else if ( com[6] == 'L' ) { // delete back
      L.pop_back();
    }
    else if ( com[6] == 'F' ) { // delete front
      L.pop_front();
    }
    else if ( com[0] == 'd' ) { // delete
      scanf("%d", &x);
      for ( list<int>::iterator iter = L.begin(); iter != L.end(); iter++ ) {
	if ( *iter == x ) {
	  L.erase(iter);
	  break;
	}
      }
    }
  }

  int i = 0;
  for ( list<int>::iterator iter = L.begin(); iter != L.end(); iter++ ) {
    if ( i++ )  printf(" ");
    printf("%d", *iter); // Access list<int> element
  }
  
  printf("\n");
  
  return 0;
}
