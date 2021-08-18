#include <iostream>
 
using namespace std;
 
int main() {
 
    int i,n;
    cin >> n;
    for(i=0;i<n;i++){
        cout << "Ho";
        if (i<n-1)
            cout << " ";
        else cout << "!" << endl;
    }
        
    return 0;
}
