#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double a,b,c;

    cin >> a >> b >> c;

    cout << "NUMBER = " << a << endl;

    cout << setprecision(2) << fixed;

    cout << "SALARY = U$ " << b * c << endl;

    return 0;
}