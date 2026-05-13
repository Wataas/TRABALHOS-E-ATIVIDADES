#include <iostream>
using namespace std;

int main () 
{
    
    int vetA[6];
    int vetB[6];
    int soma=0;
    int i;
    //soma = 0;
    cout<<"digite o 1* vetor"<< endl;
    for (i=0; i<6; i++) {
        
        cin>>vetA[i];
    }
    
    cout<<"digite o 2* vetor"<< endl;
    for (i=0; i<6; i++) {
        
        cin>>vetB[i];
    }
    
     for (i=0; i<6; i++) {
         
         soma  = soma + (vetA[i] - vetB[5 - i]);
         
         
    }
     
     cout<<"soma dos restantes"<<soma;
}
