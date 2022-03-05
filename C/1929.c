#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
  int ehTriangulo (int a, int b, int c){
      return (abs(b-c) < a && a < b+c) | (abs(a-c) < b && b < a+c) | (abs(a-b) < c && c < a+b);
  }

  int firstInput,secondInput,thirdInput,fourthInput;

  scanf("%d %d %d %d", &firstInput, &secondInput, &thirdInput, &fourthInput);

  if(ehTriangulo(firstInput,secondInput,thirdInput))
      printf("%c\n", 'S');
  else if(ehTriangulo(firstInput,secondInput,fourthInput))
      printf("%c\n", 'S');
  else if(ehTriangulo(firstInput,fourthInput,thirdInput))
      printf("%c\n", 'S');
  else if(ehTriangulo(fourthInput,secondInput,thirdInput))
      printf("%c\n", 'S');
  else
      printf("%c\n", 'N');
  return 0;
}
