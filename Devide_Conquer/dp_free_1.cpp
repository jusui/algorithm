#include <cstdlib>
#include <cstdio>
#include <iostream>
using namespace std;

int main(void) {
  double data[DATA_SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5};
  double result[DATA_SIZE];
  int i;

  // Memory
  if ( ( result = (double *)malloc(DATA_SIZE * sizeof(double) ) == NULL ) {
      printf("Failled to allocate memory.\n");
      return 1;
    }
    
  for ( i = 0; i < DATA_SIZE; i++ ) {
    result[i] = data[i] * data[i];
  }

  for ( i = 0; i < DATA_SIZE; i++ ) {
    printf("%5.2f\n", result[i]);
  }

  free(result);
  
  return 0;
}


