#include <iostream>
using namespace std;

void solution(int N) {

  for ( int i = 1; i < N; i++ ) {
    bool num = true;
    if ( i % 3 == 0 ) {
      cout <<"Fizz";
      num = false;
    }
    if ( i % 5 == 0 ) {
      cout << "Buzz";
      num = false;
    }
    if ( i % 7 == 0 ) {
      cout << "Woof";
      num = false;
    }
    if ( num ) {
      cout << i;
    }
    cout << endl;
  }
  
}


int main() {

  solution(10);
  
  return 0;
  
}
