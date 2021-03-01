#include <cstdio>
using namespace std;

int m, n, A[100][100], B[100][100];
int main() {
  scanf("%d %d", &m, &n);
  for(int i = 0; i < m; i++) {
    for(int j = 0; j < m; j++) {
      scanf("%d", &A[i][j]);
    }
  }
  for(int i = 0; i < m; i++) {
    for(int j = 0; j < m; j++) {
      scanf("%d", &B[i][j]);
    }
  }
  for(int i = 0; i < m; i++) {
    for(int j = 0; j < m; j++) {
      printf("%d ", A[i][j] + B[i][j]);
    }
    printf("\n");
  }
  return 0;
}