#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
  int a,b,i,j;
    cin >> a;
    for(i=0;i<a;i++){
        cin >> b;
        for(j=2;j<=b;j++)
            if(b%j==0){
                if(j!=b){ 
			        cout << b << " nao eh primo" << endl; 
			        break;
		         }
                else cout << b << " eh primo" << endl;
            }
    }
  return 0;
}