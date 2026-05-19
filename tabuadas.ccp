#include <iostream>
using namespace std;

int main() {
    int tabuada = 1;
    int i = 1;
    
    // Laço de fora: controla o número da tabuada (de 1 a 10)
    for (tabuada = 1; tabuada <= 10; tabuada++) {
        
        cout << "=== TABUADA DO " << tabuada << " ===" << endl;
        
        // Laço de dentro: multiplica o número atual por valores de 1 a 10
        for (i = 1; i <= 10; i++) {
            cout << tabuada << " x " << i << " = " << tabuada * i << endl;
        }
        
        // Linha em branco para separar visualmente as tabuadas
        cout << endl; 
    }

    return 0;
}
