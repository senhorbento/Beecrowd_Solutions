#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    double A,B,C,d;

    cin >> A >> B >> C;
    d = (A + B + abs(A - B)) / 2;
    if (d>C)
    cout << d << " eh o maior" << endl;
    else
    cout << C << " eh o maior" << endl;

    return 0;
}