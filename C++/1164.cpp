#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
  int N,a,b,c,i,j;
  a =1;
  cin >> N;
  for(i=1;i<=N;i++){
      c=0;
      cin >> b;
      for(j=1;j<b;j++){
        if(b%j==0){
            c=c+j;
        }
      }
      if(c==b) cout << b << " eh perfeito" << endl;
      else cout << b << " nao eh perfeito" << endl;
  }
  return 0;
}