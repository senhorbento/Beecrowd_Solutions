#include <iostream>

using namespace std;

void mostrarDiferenca(int n){
    int joao, ze, diferenca = 0;
    for(int i=0; i<n; i++){
        cin >>  joao >> ze;
        diferenca += joao - ze;
        cout << diferenca << endl;
    }
}

int main(){
    int n, qtd = 1;
    do{
        cin >> n;
        if(n != 0){
            cout << "Teste " << qtd << endl;
            mostrarDiferenca(n);
            cout << endl;
            qtd++;
        }
    }while(n != 0);
    return 0;
}
