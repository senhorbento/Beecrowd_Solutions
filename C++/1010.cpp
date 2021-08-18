#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double a,b,c,d;

    cout << setprecision(2) << fixed;

    cin >> a >> b >> c;
    d = b*c;

    cin >> a >> b >> c;
    d += b*c;

    cout << "VALOR A PAGAR: R$ " << d << endl;

    return 0;
}
