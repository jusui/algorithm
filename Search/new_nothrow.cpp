#include <iostream>
#include <new>
using namespace std;

class CSample{

public:
  
};

int main() {
  CSample * p = new(nothrow) CSample;

  if ( p == NULL ) {
    cout << "Could not get memory ! " << endl;
  }

  return 0;
  
}
