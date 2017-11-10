#include <iostream>
#include <stack>
using namespace std;

int main() {
  stack<int> S;

  // Add (int) in stack
  S.push(3);
  S.push(7);
  S.push(1);
  // Stack size()
  cout << S.size() << " ";

  // 1st stack
  cout << S.top() << " "; // 1
  // Delete 1st stack
  S.pop();

  cout << S.top() << " "; // 7
  S.pop();

  cout << S.top() << " "; // 3

  S.push(5);

  cout << S.top() << " "; // 5
  S.pop();

  cout << S.top() << endl;

  return 0;
}
