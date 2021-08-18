#include <iostream>

using namespace std;

class Ponto{
   private:
      double x,y;
   public:
      void ler();
      string obterQuadrante();
      bool origem();
      bool eixoX();
      bool eixoY();
      void mostrar(); 
};

void Ponto::ler(){
   cin >> x >> y;
}

string Ponto::obterQuadrante(){
   if (x > 0 && y > 0) return "Q1";
   else if (x < 0 && y > 0) return "Q2";
   else if (x < 0 && y < 0) return "Q3";
   else if (x > 0 && y < 0) return "Q4";
}

bool Ponto::origem(){
   if (x==0 && y==0) return true;
   else return false; 
}

bool Ponto::eixoX(){
   if ((x>0 && y==0) || (x<0 && y==0)) return true;
   else return false;
}

bool Ponto::eixoY(){
   if ((x==0 && y<0) || (x==0 && y>0)) return true;
   else return false;
}

void Ponto::mostrar(){
   if(eixoX()==true) cout << "Eixo X" << endl;
   else if(eixoY()==true) cout << "Eixo Y" << endl;
   else if(origem()==true) cout << "Origem" << endl;
   else cout << obterQuadrante() << endl;
}

int main(){
   Ponto a;
   a.ler();
   a.mostrar();
   return 0;
}