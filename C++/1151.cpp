#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
 
int main() {
int f, f1, soma, ler, i;
  cin >> ler;
  i = 1;
  f = 0;
  f1 = 1;
  soma = 1;
  cout << f;
    while (i != ler)
    {
      cout << " ";
      soma = f + f1;
      f = f1;
      f1 = soma;
      i = i + 1;
      cout << f;
    }
  cout << endl;
    return 0;
}