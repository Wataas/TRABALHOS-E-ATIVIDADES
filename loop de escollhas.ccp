#include <iostream>
using namespace std;

void d() {cout<<"----------------"<< endl;}
    int main() 
{

    
    int escolha;
  
  
        while (escolha != 3 ) {
            
            cout<<"escolha uma opçao"<< endl;
            cout<<"1-ver armario"<< endl;
            cout<<"2-ver gato"<< endl;
            cout<<"3-avançar"<< endl;
            cin>>escolha;
            
            if (escolha==1) {
                
                cout<<"vc checa o armario, nao ha nada"<< endl;
                d();
                
            }
            
            else if (escolha==2) {
                
                cout<<"vc ve o gato, nada dms"<< endl;
                d();
                
                
            }
            
        }
        
        cout<<"vc decide avançar";
        
    }
            
            
  
            
            

      
        
  
