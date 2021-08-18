#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Eq2Grau{
    private:
        double a,b,c;
    public:
        void ler();
        double delta();
        int raizes();
        double raiz1();
        double raiz2();
        void mostrar();
};

void Eq2Grau::ler(){
    cin >> a >> b >> c;
}

double Eq2Grau::delta(){
    return pow(b,2)-4*(a*c);
}

int Eq2Grau::raizes(){
    int qtd;
    if(delta()>0) qtd=2;
    else if(delta()==0) qtd=1;
    else qtd=0;
    return qtd;
}

double Eq2Grau::raiz1(){
    return (-b+sqrt(delta()))/(2*a);
}

double Eq2Grau::raiz2(){
    return (-b-sqrt(delta()))/(2*a);
}

void Eq2Grau::mostrar(){
    if(a != 0 && raizes()>0){
        cout << setprecision(5) << fixed;
        cout << "R1 = "<< raiz1() << endl;
        cout << "R2 = "<< raiz2() << endl;
    }
    else cout << "Impossivel calcular" << endl;
}

int main(){
    Eq2Grau a;
    a.ler();
    a.mostrar();
    return 0;
}