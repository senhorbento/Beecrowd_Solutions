#include <iostream>

using namespace std;

int main(){
    int n, saldo, menor, movimento;
    cin >> n >> saldo;
    menor=saldo;
    for(int i=0;i<n;i++){
        cin >> movimento;
        saldo = saldo + movimento;
        if(saldo < menor) menor = saldo;
    }
    cout << menor << endl;
    return 0;
}
