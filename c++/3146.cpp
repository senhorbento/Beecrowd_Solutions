#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double entrada;
    
    cin >> entrada;
    cout << setprecision(2) << fixed;
    cout << ((2*3.14)*entrada) << endl;
    return 0;
}