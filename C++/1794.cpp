#include <iostream>
 
using namespace std;
 
int main() {
    int N, LA, LB, SA, SB, aux;
    aux = 0;
    cin >> N >> LA >> LB >> SA >> SB;
    if(N >= LA && N <= LB)
        aux++;
    if(N >= SA && N <= SB)
        aux++;
    if(aux == 2)
        cout << "possivel" << endl;
    else
        cout << "impossivel" << endl;
        
    return 0;
}
