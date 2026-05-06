#include <iostream>
using namespace std;

int main()
    {
   
       int vet[5];
       int i=0;
       int maiores=0;
       
       for (i=0; i<5; i++) {
           
           cout<<"digite seus valores"<< endl;
           cin>>vet[i];
        }
        
            for (i=0; i<5; i++) {
                
                if (vet[i] > vet[0]) {
                    
                    maiores++;
                }
             }
            
            cout<<"numeros maiores "<<maiores;
    }
        
