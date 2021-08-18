#include <iostream>
 
using namespace std;
 
int main() {
 
    int i,n;
    char frase[]={"LIFE IS NOT A PROBLEM TO BE SOLVED, BUT A REALITY TO BE EXPERIENCED"};
    
    cin >> n;
    for(i=0;i<n;i++)
        cout <<frase[i];
    cout << endl;
    
    return 0;
}
