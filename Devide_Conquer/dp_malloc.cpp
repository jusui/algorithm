#include <cstdio>
#include <cstdlib>
using namespace std;

int main(void) {
  int *ip; // pointer ip<int>
  int i, n;
  
  // input a number
  printf("Input a number : ");
  scanf("%d", &n);

  // allocate memory 
  printf("allocate memory \n");
  ip = (int *)malloc(n * sizeof(int));

  for ( i = 0; i < n; i++ ) {
    ip[i] = i;
  }

  for ( i = 0; i < n; i++ ) {
    printf("%d", ip[i]);
  }

  printf("\n");

  free(ip);

  return 0;

}

