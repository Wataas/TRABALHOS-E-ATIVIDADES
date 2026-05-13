#include <iostream>
using namespace std;

int main () {
    
    int vet[5];
    int i = 0;
    int mul2;
    int mul3;
    int p = 0;
    
    while(p<10) {
    
    mul2= 0;
    mul3= 0;
        cout<<"digite os numeros abaixo para verificaçao"<< endl;
        for (i=0; i<5; i++) {
            
            cin>>vet[i];
            
        }
        
        for (i=0; i<5; i++) {
            
            if (vet[i] % 2==0) {
                
                mul2++;
            }
            
            if (vet[i] % 3==0) {
                
                mul3++;
               
            }
            
        }
        
        cout<<"numeros multiplos de 2: "<<mul2<< endl;
        cout<<"numeros multiplos de 3: "<<mul3<< endl;
        
        
        
        
    }
    
}
