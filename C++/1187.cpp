#include <iostream>
#include <iomanip>

using namespace std;

#define _MAX_ 12

int main() {
    int i,j,colunas,colunasdec;
    double matriz [_MAX_][_MAX_],resultado;
    char operacao;

    cin >> operacao;

    for(i=0;i<_MAX_;i++)
        for(j=0;j<_MAX_;j++)
            cin >> matriz[i][j];

    colunas=11;colunasdec=1;resultado=0;
    for(i=0;i<5;i++){
            for (j=colunasdec;j<colunas;j++)
                resultado=matriz[i][j]+resultado;
            colunas--;
            colunasdec++;
        }

    if(operacao=='M')
        resultado=resultado/30;

    cout << setprecision(1) << fixed;
    cout << resultado << endl;
    return 0;
}
