#include <iostream>
#include <iomanip>

using namespace std;
 
class disciplina{
    private:
    int cod,creditos,ano,semestre;
    double nota1,nota2;
    string aluno,professor;
    public:
    void ler();
    void mostrar();
};

void disciplina::ler(){
    cin >> cod;
    cin.ignore();
    getline (cin,aluno);
    getline (cin,professor);
    cin >> creditos;
    cin >> ano;
    cin >> semestre;
    cin >> nota1;
    cin >> nota2;
}

void disciplina::mostrar(){
    cout << setfill ('0');
    cout << "Codigo    : " << setw (4) << cod << endl;
    cout << "Nome      : " << aluno << endl;
    cout << "Professor : " << professor << endl;
    cout << "Creditos  : " << creditos << endl;
    cout << "Ano       : " << ano << endl;
    cout << "Semestre  : " << semestre << endl;
    cout << setprecision(2) << fixed;
    cout << "Nota1     : "  << nota1 << endl;
    cout << "Nota2     : " << nota2 << endl;
    cout << "Media     : " << (nota1 + 2.0*nota2)/3.0 << endl;
    
}

int main() {
    disciplina a;
    int escolha;
    string sair;
    do{
        do{
            cout << "1 - ler dados da disciplina" << endl;
            cout << "2 - mostrar os dados da disciplina" << endl;
            cout << "3 - sair" << endl;
            cout << "Entre com a sua opcao:" << endl;
            cin >> escolha;
        }while(escolha < 1 || escolha >3);
        if (escolha==1)
                a.ler();
            else if(escolha==2){
                a.mostrar();
                do
                    cin>>sair;
                while(sair!="Ok");
            }
            else if(escolha==3)
                cout << "Obrigado por utilizar o programa de cadastro, volte sempre!" << endl;
    }while(escolha !=3);
    return 0;
}
