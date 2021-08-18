#include <iostream>
#include <cmath>

using namespace std;

class Triangulo{
    private:
        double a,b,c;
    public:
        void ler();
        bool FormaTriangulo();
        bool EhRetangulo();
        string Tipo();
};

void Triangulo::ler(){
    cin >> a >> b >> c;
}

bool Triangulo::FormaTriangulo(){
    double cont;
    if(a < b){
        cont = a;
        a = b;
        b = cont;
    }
    if(a < c){
        cont = a;
        a = c;
        c = cont; 
    }
    if (b < c){
        cont = b;
        b = c;
        c = cont;
    }
    
    if (a >= b + c) return false;
    else return true;
}
bool Triangulo::EhRetangulo(){
    if(pow(a, 2) == pow(b, 2) + pow(c, 2)) return true;
    else return false;
}

string Triangulo::Tipo(){
    if (a == b && b == c && a == c) return "Valido-Equilatero";
    else if (a == b || b == c || a == c) return "Valido-Isoceles";
    else return "Valido-Escaleno";
}

int main(){
    Triangulo t;
    t.ler();
    if (t.FormaTriangulo() == false) cout << "Invalido" << endl;
    else{
        cout << t.Tipo() << endl;
        if(t.EhRetangulo() == false) cout << "Retangulo: N" << endl;
        else cout << "Retangulo: S" << endl;
    }
    return 0;
}