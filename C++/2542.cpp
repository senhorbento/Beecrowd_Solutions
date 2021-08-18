#include <iostream>

using namespace std;

class carta{
    private:
    int atributos[300];
    public:
    void lerAtributos(int qtd);
    int obtervalor(int pos);  //pos indice apartir de 1
};

void carta::lerAtributos(int qtd){
    int i;
    for(i=0;i<qtd;i++)
        cin >> atributos[i];
}

int carta::obtervalor(int pos){
    return atributos[pos-1];
}

class cartas{
    private:
    int qtdCartas;
    carta v[300];
    public:
    void lerCartas(int qtdCartas, int qtdAtributos);
    carta obterCarta(int pos); //pos indice apartir de 1
};

void cartas::lerCartas(int qtdCartas, int qtdAtributos){
    int i;
    for(i=0;i<qtdCartas;i++) v[i].lerAtributos(qtdAtributos);
}

carta cartas::obterCarta(int pos){
    return v[pos-1];
}

int main(){
    cartas c;
    carta comp;
    int qtd,qtdM,qtdL,qtdT, eM, eL, eA;
    while(cin >> qtd){
        cin >> qtdM >> qtdL;
        qtdT = qtdM + qtdL;
        c.lerCartas(qtdT,qtd);
        cin >> eM >> eL >> eA;
        comp = c.obterCarta(eM);
        eM = comp.obtervalor(eA);
        comp = c.obterCarta(eL+qtdM);
        eL = comp.obtervalor(eA);
        if (eM > eL)
            cout << "Marcos" << endl;
        else if (eL > eM)
            cout << "Leonardo" << endl;
        else
            cout << "Empate" << endl;
    }
    return 0;
}