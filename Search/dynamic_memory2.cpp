#include <iostream>
using namespace std;
#define SIZE 255 // SIZE という文字列を強制的に 5 に置き換える

int main() {
  int *p1;
  int *p2;

  p1 = new int; // Allocate int type memory
  p2 = new int[SIZE]; // Allocate array[int] type memory

  *p1 = 1000; // p1
  cout << "p1 is " << *p1 << "\n";

  p2[SIZE] = 1000;
  cout << "p2 is " << p2[SIZE] << "\n";

  // delete memory p1, p2
  delete p1;
  delete[] p2;
  
  return 0;
  
}
