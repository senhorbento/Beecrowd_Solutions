#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
 
int main() {
 double a;
 cout << setprecision(3) << fixed;
 cin >> a;
 cout << "VOLUME = " << (4.0/3.0)*3.14159*pow(a,3) << endl;
    return 0;
}