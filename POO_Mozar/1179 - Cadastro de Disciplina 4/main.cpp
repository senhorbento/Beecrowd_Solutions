#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;
 
class disciplina{
    private:
        int cod,creditos,ano,semestre;
        double nota1,nota2;
        string materia,professor;
    public:
        void ler();
        void mostrar();
        bool findCod(int check);
        bool findString(string check);
        bool findAnoSem(int check, int checks);
        double media();
        int getCreditos(){return creditos;};
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
bool disciplina::findCod(int check){
    if(cod==check)
        return true;
    else
        return false;
}
bool disciplina::findAnoSem(int check, int checks){
    if(ano==check && semestre==checks)
        return true;
    else
        return false;

}
bool disciplina::findString(string check){
    if(materia.find(check)!= string::npos || professor.find(check)!= string::npos)
        return true;
    else
        return false;

}
double disciplina::media(){
    return ((nota1 + 2.0*nota2)/3.0);
}
class historico{
    private:
        disciplina d[100];
        int qtd;
    public:
        void iniciar(){qtd=0;};
        void adicionar();
        void remover();
        void alterar();
        void mostrarTodas();
        void mostrarAnoSem();
        void mostrarNome();
        void mostrarString();
        void mostrarCr();
};
void historico::adicionar(){
    d[qtd].ler();
    qtd++;
}
void historico::remover(){
    int i,j,aux,check;
    aux=0;
    cin >> check;
    for(i=0;i<qtd;i++)
        if(d[i].findCod(check)==true){
            cout << "Disciplina removida com sucesso!" << endl;
            for(j=i+1;j<qtd;j++,i++)
                d[i]=d[j];
            qtd--;
        }
        else aux++;
    if(aux==qtd) cout << "Disciplina nao encontrada!" << endl;        
}
void historico::alterar(){
    int i,check,aux;
    aux=0;
    cin >> check;
    for(i=0;i<qtd;i++)
        if(d[i].findCod(check)==true){
            d[i].ler();
            i=qtd;
            cout << "Disciplina alterada com sucesso!" << endl;
        }
        else aux++;
    if(aux==qtd) cout << "Disciplina nao encontrada!" << endl;
}
void historico::mostrarTodas(){
    int i;
    cout << "Cod. Nome                                               Cred  Ano/S Media" << endl;
    for(i=0;i<qtd;i++)
        d[i].mostrar();
}
void historico::mostrarAnoSem(){
    int i, check, checks;
    cin >> check >> checks;
    cout << "Cod. Nome                                               Cred  Ano/S Media" << endl;
    for(i=0;i<qtd;i++)
        if(d[i].findAnoSem(check,checks)==true)
            d[i].mostrar();
}
void historico::mostrarString(){
    int i;
    string check;
    cin.ignore();
    getline(cin, check);
    cout << "Cod. Nome                                               Cred  Ano/S Media" << endl;
    for(i=0;i<qtd;i++)
        if(d[i].findString(check)==true)
            d[i].mostrar();
}
void historico::mostrarCr() {
    int i;
    double cr,aux;
    cr=aux=0;
    for(i=0;i<qtd;i++){
        cr+=d[i].media()*d[i].getCreditos();
        aux += d[i].getCreditos();
    }
    if(cr > 0)
        cr=cr/aux;
   
    cout << "Coeficiente de Rendimento                                           ";
    cout << setfill ('0') <<  setw (5) << setprecision(2) << fixed << cr << endl;
}
int main() {
    historico h;
    int escolha;
    string sair;
    h.iniciar();
    do{
        do{
            cout << "1 - inserir nova disciplina" << endl;
            cout << "2 - remover disciplina pelo codigo" << endl;
            cout << "3 - alterar disciplina pelo codigo" << endl;
            cout << "4 - listar todas as disciplinas" << endl;
            cout << "5 - listar disciplinas de um ano/semestre" << endl;
            cout << "6 - listar disciplinas pelo nome/professor" << endl;
            cout << "7 - Historico" << endl;
            cout << "8 - sair" << endl;
            cout << "Entre com a sua opcao:" << endl;
            cin >> escolha;
        }while(escolha < 1 || escolha >8);
        if (escolha==1){
            h.adicionar();
            cout << "Disciplina inserida com sucesso!" << endl;
        }
        else if(escolha==2)
            h.remover();
        else if(escolha==3)
            h.alterar();
        else if(escolha==4){
            h.mostrarTodas();
            do
                cin>>sair;
            while(sair!="Ok");
        }
        else if(escolha==5){
            h.mostrarAnoSem();
            do
                cin>>sair;
            while(sair!="Ok");
        }
        else if(escolha==6){
            h.mostrarString();
            do
                cin>>sair;
            while(sair!="Ok");
        }
        else if(escolha==7){
            h.mostrarTodas();
            h.mostrarCr();
            do
                cin>>sair;
            while(sair!="Ok");
        }
        else if(escolha==8)
            cout << "Obrigado por utilizar o programa de cadastro, volte sempre!" << endl;
    }while(escolha !=8);
    return 0;
}
