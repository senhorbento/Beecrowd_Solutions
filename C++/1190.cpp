#include <iostream>
#include <iomanip>

using namespace std;

#define _MAX_ 12

int main() {
    int i,j,linhas,linhasdec;
    double matriz [_MAX_][_MAX_],resultado;
    char operacao;

    cin >> operacao;

    for(i=0;i<_MAX_;i++)
        for(j=0;j<_MAX_;j++)
            cin >> matriz[i][j];

    linhas=_MAX_-1;linhasdec=1;resultado=0;
    for(j=_MAX_-1;j>6;j--){
        for(i=linhasdec;i<linhas;i++)
            resultado = resultado + matriz[i][j];
        linhas--;linhasdec++;
    }

    if(operacao=='M')
        resultado=resultado/30;

    cout << setprecision(1) << fixed;
    cout << resultado << endl;
    return 0;
}
