#include <iostream>

using namespace std;
 
int main() {
  int N,a;
  a =1;
  cin >> N;
  while (N >= 1)
  {
    a = N * a;
    N = N-1;
  }
   cout << a << endl;
    return 0;
}