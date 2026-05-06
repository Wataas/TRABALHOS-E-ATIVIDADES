#include <iostream>
using namespace std;

int main()
    {
   
       int vet[9];
       int i=0;
       int mult2=0;
       int mult3=0;
       
       
     
       for (i=0; i<9; i++) {
           
          cout<<"digite um valorr"<< endl;
          cin>>vet[i];
        }
        
       for (i=0; i<9; i++) {
           
           if (vet[i] % 2 == 0) {
               
               mult2++;
               
               
               
            }
           
            if (vet[i] % 3 == 0) {
                
                mult3++;
            }
       }
            
            cout<<"multriplos de 2: "<<mult2<< endl;
            cout<<"multplipos de 3: "<<mult3;
            
        
    }
      
