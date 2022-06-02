#include <iostream>
 
using namespace std;
 
int main() {
    int qtd,valor1,valor2,jogador1,jogador2;
    
    do{
        jogador1 = jogador2 = 0;
        cin >> qtd;
        for(int i = 0;i < qtd; i++){
            cin >> valor1 >> valor2;
            if(valor1 > valor2)
                jogador1++;
            else if(valor1 < valor2)
                jogador2++;
        }
        if(qtd != 0)
            cout << jogador1 << " " << jogador2 << endl;
    }while(qtd != 0);
    return 0;
}
