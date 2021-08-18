#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
class notas{
    private:
    double nota1,nota2;
    public:
    void ler();
    double media();
};

void notas::ler(){
    do {cin >> nota1;
    if(nota1<0 || nota1>10) cout << "nota invalida"<< endl;
    }while(nota1<0 || nota1>10);
    do{cin >> nota2;
    if(nota2<0 || nota2>10) cout << "nota invalida"<< endl;
    }while(nota2<0 || nota2>10);
}

double notas::media(){
    return (nota1+nota2)/2;
}

int main(){
    notas a;
    a.ler();
    cout << setprecision(2) << fixed;
    cout << "media = " << a.media() << endl;
    return 0;
}