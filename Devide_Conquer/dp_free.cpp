#include <cstdio>
#define DATA_SIZE 5
using namespace std;

int main(void) {
  double data[DATA_SIZE] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
  double result[DATA_SIZE];
  int i;

  // input iE2
  for ( i = 0; i < DATA_SIZE; i++ ) {
    result[i] = data[i] * data[i];
 }
  for ( i = 0; i < DATA_SIZE; i++ ) {
    // Max = 5 indices.(11.000000 -> 11.00)
    printf("%5.2f\n", result[i]);
  }

  return 0;
}
