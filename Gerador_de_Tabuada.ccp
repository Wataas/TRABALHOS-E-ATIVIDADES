#include <iostream>
using namespace std;

int main() 
    {

        int numero;
        int contador=0;
        int resul;
        
        
        cout<<"digite um numero"<< endl;
        cin>>numero;
        cout<<"-----------------"<< endl;
        
        while(contador<10){
            
            contador= contador + 1;
            
            resul= numero * contador;
            
            
            cout<<numero<<" x "<<contador<<" = "<<resul<< endl;
        }
        
    }
