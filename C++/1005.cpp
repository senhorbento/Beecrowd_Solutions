#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    double a,b;

    cout << setprecision(5) << fixed;
  
    cin >> a >> b;
    
    cout << "MEDIA = " << (a*3.5+b*7.5)/11 << endl;
 
    return 0;
}