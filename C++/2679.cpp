#include <iostream>
using namespace std;

int main() {
	int numero;
    cin >> numero;
    if (numero % 2 == 0)
        cout << (numero += 2) << endl;
    else
        cout << (numero += 1) << endl;
 
    return 0;
}
