#include <iostream>
using namespace std;

int main() {
    
    int ma[4][4];
    int l;
    int c;
    int maior;
    
    for(l=0; l<4; l++) {
        for(c=0; c<4; c++) {
            
            ma[l][c] = rand()%6 + 1;
        }
    }
    
      
    for(l=0; l<4; l++) {
        for(c=0; c<4; c++) {
            cout<<ma[l][c]<<" ";
        }
        cout<<endl;
    }
    
    maior = ma[0][0];
    for(l=0; l<4; l++) {
        for(c=0; c<4; c++) {
            if (ma[l][c] > maior) {
                maior = ma[l][c];
            }
        } 
    }
    
      
    cout<<"numero maior"<< endl;
    cout<<maior;
}
