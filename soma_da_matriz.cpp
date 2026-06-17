#include <iostream>
using namespace std;

int main() {
    
    int ma[5][5];
    int li;
    int co;
    int soma=0;
    
    cout<<"preencha a matriz"<< endl;
    
    for(co=0; co<5; co++) {
        for(li=0; li<5; li++) {
            cin>>ma[li][co];
        }
    }
    
    
    cout<<"sua coluna"<< endl;
     for(co=0; co<5; co++) {
        for(li=0; li<5; li++) {
            cout<<ma[li][co]<<" ";
        }
        cout<<endl;
     }
     cout<<"soma de todos os elementos"<< endl;
     for(co=0; co<5; co++) {
        for(li=0; li<5; li++) {
            
        soma =  soma + ma[li][co];
        }
     }
     cout<<soma;
        
     
            
            
            
}
