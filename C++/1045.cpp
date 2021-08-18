#include <iostream>
#include <cmath>

using namespace std;
class Triangulo{
    private:
        double a,b,c;
    public:
        void ler();
        void ordenarLados();
        bool FormaTriangulo();
        string TipoPeloAngulo(); //OBTUSANGULO ACUTANGULO ou RETANGULO
        string TipoPeloLados(); // EQUILATERO, ISOSCELES ou ESCALENO
        void mostrar();
};

void Triangulo::ler(){
    cin >> a >> b >> c;
    ordenarLados();
}

void Triangulo::ordenarLados(){
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
}

bool Triangulo::FormaTriangulo(){
    if (a >= b + c) return false;
    else return true;
}

string Triangulo::TipoPeloAngulo(){
    if(pow(a, 2) == pow(b, 2) + pow(c, 2)) return "TRIANGULO RETANGULO";
    else if(pow(a, 2) > pow(b, 2) + pow(c, 2)) return "TRIANGULO OBTUSANGULO";
    else if(pow(a, 2) < pow(b, 2) + pow(c, 2)) return "TRIANGULO ACUTANGULO";
    else return "";
}

string Triangulo::TipoPeloLados(){
    if (a == b && b == c && a == c) return "\nTRIANGULO EQUILATERO";
    else if (a == b || b == c || a == c) return "\nTRIANGULO ISOSCELES";
    else return "";
}

void Triangulo::mostrar(){
    if (FormaTriangulo()==false) cout << "NAO FORMA TRIANGULO" << endl;
    else cout << TipoPeloAngulo() << TipoPeloLados() << endl;
}

int main(){
    Triangulo a;
    a.ler();
    a.mostrar();
    return 0;
}