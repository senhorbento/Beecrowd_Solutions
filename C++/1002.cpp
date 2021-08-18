#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main() {
    double a;
    cout << setprecision(4) << fixed;
    cin >> a;
    cout << "A="<< 3.14159 * pow(a,2) << endl;
    return 0;
}