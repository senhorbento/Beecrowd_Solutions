#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
 
int main() {
    double A,B,C,pi;
    pi = 3.14159;
  
    cout << setprecision(3) << fixed;
      
    cin >> A >> B >> C;
  
    cout << "TRIANGULO: " << A  * C  / 2.0 << endl;
    cout << "CIRCULO: " << pi * pow(C,2) << endl;
    cout << "TRAPEZIO: " << (A + B) * C / 2.0 << endl ;
    cout << "QUADRADO: " << pow(B,2) << endl;
    cout << "RETANGULO: " << A * B << endl;
  
    return 0;
}