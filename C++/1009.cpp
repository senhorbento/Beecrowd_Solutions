#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double b,c;
    string nome;

    cout << setprecision(2) << fixed;

    getline (cin,nome);

    cin >> b >> c;

    cout << "TOTAL = R$ " << b + (0.15 * c) << endl;

    return 0;
}