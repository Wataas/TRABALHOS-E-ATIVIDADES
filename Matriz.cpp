#include <iostream>
using namespace std;

int main() {
  
  int matriz[5][5];
  int co;
  int li;
  
  
    for (co=0; co<5; co++) {
        for(li=0; li<5; li++) {
            matriz[li][co] = rand() % 30;
        }
    }
    
     for (co=0; co<5; co++) {
        for(li=0; li<5; li++) {
            cout<<matriz[li][co]<<" ";}
            cout<<endl;
     }
    
