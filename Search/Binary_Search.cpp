#include <iostream>
using namespace std;
<<<<<<< HEAD

int A[1000000], n;

int binarySearch(int key) {
  int left = 0;
  int right  = n;
  int mid;
  while ( left < right ) {
    mid = (left + right ) / 2;
    if ( key == A[mid] ) return 1; // key found
    if ( key > A[mid] ) left = mid + 1; // Search right
    else if ( key < A[mid] ) right = mid; // Search left
=======
int A[10000], n;

int binarySearch(int key) {
  int left = 0;
  int right = n;
  int mid = 0;
  while( left < right ) {
    mid = (left + right ) / 2;
    if ( A[mid] == key ) return 1; // key found !
    if ( key > A[mid] ) left = mid + 1;
    else if ( key < A[mid] ) right = mid;
>>>>>>> origin/master
  }
  return 0;
}

<<<<<<< HEAD
int main () {
  int i, q, k, sum = 0;

  scanf("%d", &n);
  for ( i = 0; i < n; i++ ) {
=======
int main() {
  int i, q, k, sum = 0;
 
  scanf("%d", &n);
  for ( int i = 0; i < n; i++ ) {
>>>>>>> origin/master
    scanf("%d", &A[i]);
  }

  scanf("%d", &q);
  for ( i = 0; i < q; i++ ) {
    scanf("%d", &k);
    if ( binarySearch( k ) ) sum++;
  }
  printf("%d\n", sum);
<<<<<<< HEAD

  return 0;
}

=======
  
  return 0;
}
>>>>>>> origin/master
