#include <iostream>
 
using namespace std;
 
int main() {
 
    int z,x,i,qtd;

    qtd = 1;

    cin >> x;

    do{
        cin >> z;
    }while(z<=x);

    for(i=x;x<z;i++){
        x+=i;
        qtd++;
    }

    cout << qtd << endl;
    return 0;
}
