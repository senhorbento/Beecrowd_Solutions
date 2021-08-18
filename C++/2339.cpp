#include <iostream>
 
using namespace std;
 
int main() {
 
    int competidores,folhas,qtd,r;
    cin >> competidores >> folhas >> qtd;
    r=qtd*competidores;

    if(r<=folhas)
        cout << "S" << endl;
    else
        cout << "N" << endl;

    return 0;
}
