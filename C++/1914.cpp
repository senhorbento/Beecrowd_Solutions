#include <iostream>
#include <cstring>

using namespace std;
 
int main() {
    int n,a,b,i;
    char jogador1[20], escolha1[20], jogador2[20], escolha2[20];
    cin >> n;
    for(i=0;i<n;i++){
    setbuf(stdin,NULL);
    cin >> jogador1 >> escolha1 >> jogador2 >> escolha2 >> a >> b;
    if((a+b)%2==0)
        if(strcmp(escolha1,"PAR")==0) cout << jogador1 << endl;
        else cout << jogador2 << endl;
    else
        if(strcmp(escolha1,"IMPAR")==0) cout << jogador1 << endl;
        else cout << jogador2 << endl;
    }
    return 0;
}
