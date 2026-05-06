#include <iostream>
using namespace std;

void d() {cout<<"---------------------------------"<< endl;}
    int main() 
{

    
    int escolha;
    bool faca= false;
    bool garrafa= false;
  
  
        while (escolha != 3 ) {
            
            d();
            cout<<"escolha uma opçao"<< endl;
            cout<<"1-ver armario"<< endl;
            cout<<"2-ver gato"<< endl;
            cout<<"3-avançar"<< endl;
            cin>>escolha;
            
            if (escolha==1) {
                
                d();
                cout<<"vc checa o armario, e encontra uma faca"<< endl;
                d();
                cout<<"pegar faca?"<< endl;
                cout<<"1-pegar"<< endl;
                cout<<"2-não pegar"<< endl;
                cin>>escolha;
                
                if (escolha==1) {
                    
                    faca= true;
                    cout<<"vc adquiriu faca"<< endl;
                }
                
                else if (escolha==2) {
                    
                    cout<<"vc continua de mãos vazias"<< endl;
                }
                
            }
            
            else if (escolha==2) {
                
                cout<<"vc ve o gato, nada dms"<< endl;
                d();
                
                
            }
            
        }
        
        cout<<"vc decide avançar";
        
    }
