#include <iostream>
#include <cstdlib>
#include <stack>
using namespace std;

int main() {
  int a, b, x = 0;
  string str;
  stack<int> S;

  while ( cin >> str ) {
    if ( str[0] == '+' ) {
      a = S.top(); S.pop();
      b = S.top(); S.pop();
      S.push(a + b);
    }
    else if ( str[0] == '-' ) {
      b = S.top(); S.pop();
      a = S.top(); S.pop();
      S.push(a - b);
    }
    else if ( str[0] == '*' ) {
      a = S.top(); S.pop();
      b = S.top(); S.pop();
      S.push(a * b);
    }
    else {
      // atoi() : (string -> integer)
      S.push(atoi(str.c_str()));
    }
  }
  
  cout << S.top() << endl;
  
  return 0;
}

