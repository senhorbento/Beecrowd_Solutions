#include <iostream>
#include <iomanip>

using namespace std;
 
class disciplina{
    private:
    int cod,creditos,ano,semestre;
    double nota1,nota2;
    string materia,professor;
    public:
    void ler();
    void mostrar();
};

void disciplina::ler(){
    cin >> cod;
    cin.ignore();
    getline (cin,materia);
    getline (cin,professor);
    cin >> creditos;
    cin >> ano;
    cin >> semestre;
    cin >> nota1;
    cin >> nota2;
}

void disciplina::mostrar(){
    cout << setfill ('0') <<  setw (4) << cod << " ";
    cout << left << setfill (' ') <<  setw (50) << materia<< " ";
    cout << right << setfill (' ') << setw(4) << creditos << " ";
    cout << ano << "/" << semestre << " ";
    cout << right << setfill ('0') <<  setw (5) << setprecision(2) << fixed << (nota1 + 2.0*nota2)/3.0 << endl;
}

int main() {
    disciplina a[100];
    int escolha,i,qtd;
    string sair;
    qtd=0;
    do{
        do{
            cout << "1 - inicializar" << endl;
            cout << "2 - inserir nova disciplina" << endl;
            cout << "3 - listar historico" << endl;
            cout << "4 - sair" << endl;
            cout << "Entre com a sua opcao:" << endl;
            cin >> escolha;
        }while(escolha < 1 || escolha >4);
        if (escolha==1){
                qtd=0;
                cout << "Historico inicializado com sucesso!" << endl;
        }
        else if(escolha==2){
            a[qtd].ler();
            qtd++;
            cout << "Disciplina inserida com sucesso!" << endl;
        }
        else if(escolha==3){
            cout << "Cod. Nome                                               Cred  Ano/S Media" << endl;
            for(i=0;i<qtd;i++){
                a[i].mostrar();
            }
            do
                cin>>sair;
            while(sair!="Ok");
        }
        else if(escolha==4)
            cout << "Obrigado por utilizar o programa de cadastro, volte sempre!" << endl;
    }while(escolha !=4);
    return 0;
}
