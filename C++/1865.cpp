#include <iostream>
#include <cstring>

using namespace std;
 
int main() {
    int n,i,a;
    char nome[20];
    cin >>n;
    for(i=0;i<n;i++){
        setbuf(stdin,NULL);
        cin >> nome >> a;
        if(strcmp(nome,"Thor")==0)
            cout << "Y" << endl;
        else cout << "N" << endl;
    }
    return 0;
}
