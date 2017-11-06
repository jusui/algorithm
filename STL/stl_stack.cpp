#include <iostream>
#include <stack>
using namespace std;

int main() {
  stack<int> S;

  S.push(3); // push 3
  S.push(7); // push 3
  S.push(1); // push 3
  cout << S.size() << " " ; // stack size = 3

  cout << S.top() << " " ; // 1
  S.pop(); // Delete top of stack

  cout << S.top() << " " ; // 7
  S.pop();

  cout << S.top() << " " ; // 3

  S.push(5);

  cout << S.top() << " " ; // 5
  S.pop();

  cout << S.top() << endl; // 3

  return 0;  
}
