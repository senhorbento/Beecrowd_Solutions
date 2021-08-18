#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    double a,b,c;

    cout << setprecision(1) << fixed;
  
    cin >> a >> b >> c;
    
    cout << "MEDIA = " << (a*2+b*3+c*5)/10 << endl;
 
    return 0;
}