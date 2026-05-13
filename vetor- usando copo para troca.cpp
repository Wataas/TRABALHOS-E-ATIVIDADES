#include <iostream>
using namespace std;

int main () 
{
    
    int vetA[6]={2,3,4,5,2,2};
    int vetB[6]={7,7,9,7,7,9};
    int i;
    int copo;
    
    for (i=0; i<6; i++) {
        
        copo = vetA[i];
        vetA[i] = vetB[i];
        vetB[i] = copo;
    }
    
    cout<<"vetor A: ";
     for (i=0; i<6; i++) {
         
         cout<<vetA[i]<<" ";
     }
     
     cout<< endl;
     cout<<"vetor B: ";
     for (i=0; i<6; i++) {
         
         cout<<vetB[i]<<" ";
     }
}


//VERSAO COM SWAP
//VERSAO COM SWAP
//VERSAO COM SWAP
//VERSAO COM SWAP

#include <iostream>
using namespace std;

int main () 
{
    
    int vetA[6]={2,3,4,5,2,2};
    int vetB[6]={7,7,9,7,7,9};
    int i;
 
    
    for (i=0; i<6; i++) {
        
        swap(vetA[i], vetB[i]);
    }
    
    cout<<"vetor A: ";
     for (i=0; i<6; i++) {
         
         cout<<vetA[i]<<" ";
     }
     
     cout<< endl;
     cout<<"vetor B: ";
     for (i=0; i<6; i++) {
         
         cout<<vetB[i]<<" ";
     }
}
