#include <iostream>
using namespace std;

int main()
    {
   
       int vet1[5]={2,4,6,3,2};
       int vet2[5]={9,3,4,2,4};
       int vet3[5];
       int i=0;
       
       for (i=0; i<5; i++) {
           
           vet3[i] = vet1[i] * vet2[i]; 
       }
       
       for (i=0; i<5; i++) {
           
           cout<<vet3[i]<< endl; 
       }
    }
