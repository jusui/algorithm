#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

long long cnt;
int l;
int A[10000000];
int n;
vector<int> G;

// Insertion Sort with g = Gi, g(n+1) = 3gn+1
void insertionSort(int A[], int n, int g) {
  for ( int i = 0; i < n; i++ ) {
    int v = A[i];
    int j = i - g; // vより大きい要素を1つ後方へ移動
    while( j >= 0 && A[j] > v ) {
      A[j + g] = A[j];
      j -= g;
      cnt++;
    }
    A[j + g] = v;
  }
}


void shellSort(int A[], int n) {
  // List G = {1, 4, 13, 40, 121, 364, 1093, ...}
  for ( int h = 1; ; ) {
    if ( h > n ) break;
    G.push_back(h);
    h = 3*h + 1; // definition of g
  }

  for ( int i = G.size() - 1; i >= 0; i-- ) { // Reverse G[i] = g
    insertionSort(A, n, G[i]);
  }
}


int main() {
  cin >> n;
  for ( int i = 0; i < n; i++ ) scanf("%d", &A[i]);
  cnt = 0;

  shellSort(A, n);

  cout << "G.size() = " << G.size() << endl;
  for ( int i = G.size() - 1; i >= 0; i-- ) {
    printf("%d", G[i]);
    if ( i ) printf(" ");
  }
  printf("\n");
  printf("%d\n", cnt);
  for ( int i = 0; i < n; i++ ) printf("%d\n", A[i]);

  return 0;
}
