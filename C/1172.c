#include <stdio.h>

int i, n;

int main() {
  for(i = 0; i <= 9; i++){
    scanf("%d", &n);
    if(n <= 0)
      printf("X[%d] = 1\n", i);
    else
      printf("X[%d] = %d\n", i, n);
  }
  return 0;
}
