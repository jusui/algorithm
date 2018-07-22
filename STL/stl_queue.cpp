#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
  queue<string> Q;

  // push()
  Q.push("red");
  Q.push("yellow");  
  Q.push("yellow");  
  Q.push("blue");

  // front() : return [0]
  cout << Q.front() << " ";
  Q.pop(); // pop() : Delete

  cout << Q.front() << " ";
  Q.pop();

  cout << Q.front() << " ";
  Q.pop();

  cout << Q.size() << " ";

  Q.push("green");
  
  cout << Q.front() << " ";

  cout << Q.front() << endl; 

  if ( Q.empty() )
    cout << "queue has no element" << endl;

  return 0;
}
