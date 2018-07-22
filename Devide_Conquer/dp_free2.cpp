#include <cstdlib>
#include <cstdio>
#define DATA_SIZE 5
using namespace std;

double *square_array(const double *dat, int n) {
  double *buf;
  int i;
  // get dp & return address
  if ( ( buf = (double *)malloc(n * sizeof(double)) ) != NULL ) {
    for ( i = 0; i < n; i++ ) {
      buf[i] = dat[i] * dat[i];
    }
  }
  return buf;
}


int main(void) {
  double data[DATA_SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5};
  double *result;
  int i;

  // Error handling
  if ( (result = square_array(data, DATA_SIZE)) == NULL ) {
    printf("Failled to allocate memory.\n");
    return 1;
  }

  for ( i = 0; i < DATA_SIZE; i++ ) {
    printf("%5.2f\n", result[i]);
  }

  // free memory
  free(result);
  
  return 0;
}
