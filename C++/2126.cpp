#include <iostream>
#include <string>

using namespace std;

class subsequencia{
    private:
    string texto;
    public:
    void setTexto();//txt: string
    int Ocorrencias(string s,int *oco, int *up);//substr: string
};

void subsequencia::setTexto(){
    cin >> texto;
}

int subsequencia::Ocorrencias(string s,int *oco, int *up){
    int i;
    for(i=texto.find(s,0); i!=string::npos; i=texto.find(s,i)){
        *oco+=1;
        *up = i;
        i++;
    }
}

int main(){
    subsequencia txt;
    string substring;
    int i, oco, up;
    i = 1;
    while(cin >> substring){
        oco = up = 0;
        txt.setTexto();
        cout << "Caso #" << i << ":" << endl;
        txt.Ocorrencias(substring,&oco,&up);
        if(oco==0) cout << "Nao existe subsequencia" << endl;
        else{
            cout << "Qtd.Subsequencias: " << oco << endl;
            cout << "Pos: " << up+1 << endl;
        }
        cout << endl;
        i++;
    }
    return 0;
}