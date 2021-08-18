#include <iostream>
#include <cstdlib>

using namespace std;

int comparador(const void *a, const void *b) {
   return *(int*)b-*(int*)a;
}

class vetor{
    private:
    int qtd,notas[100];
    public:
    void ler(int n);
    void ordenar();  //usar o qsort
    int obterNota(int pos); //retorna a nota dado o indice i (de 1 a qtd)
};

void vetor::ler(int n){
    int i;
    qtd = n;
    for(i=0;i<qtd;i++)
        cin >> notas[i];
    ordenar();
}

void vetor::ordenar(){
    qsort(notas,qtd,sizeof(int),comparador);
}

int vetor::obterNota(int pos){
    return notas[pos];
}

int main(){
    vetor r;
    int n,q,i,pos;
    while(cin >> n >> q){
        r.ler(n);
        for (i=0; i<q; i++){
            cin >> pos;
            cout << r.obterNota(pos-1) << endl;
        }
    }
    return 0;
}