#include <iostream>
using namespace std;

int main()
    {
   
       int vet[5];
       int i=0;
       
       
     
       for (i=0; i<5; i++) {
           
          cout<<"digite um valorr"<< endl;
          cin>>vet[i];
        }
        
       for (i=0; i<5; i++) {
           
           if (vet[i] % 2 == 0) {
               
               cout<<"posiçao n"<<i<<"="<<vet[i]<< endl;
               
               
            }
        }
    }
      
