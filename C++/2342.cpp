#include <iostream>
 
using namespace std;
 
int main() {
    int limite, valor1, valor2;
    char funcao;
    
    cin >> limite >> valor1 >> funcao >> valor2;
    
    if(funcao == '+')
        if(valor1+valor2 <= limite)
            cout << "OK" << endl;
        else
            cout << "OVERFLOW" << endl;
    if(funcao == '*')
        if(valor1*valor2 <= limite)
            cout << "OK" << endl;
        else
            cout << "OVERFLOW" << endl;
    
    return 0;
}
