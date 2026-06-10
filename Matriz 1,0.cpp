#include <iostream>
using namespace std;

int main() {
    
    int ma[4][3];
    int co;
    int li;
    
    for(li=0; li<4; li++) {
        for(co=0; co<3; co++) {
            
            if ((li==1 || li==2) & co==1) {
                ma[li][co]=0;
            }
            else {ma[li][co]=1;
            }
        }
    }
    
  for(li=0; li<4; li++) {
        for(co=0; co<3; co++) {
            cout<<ma[li][co]<<" ";
        }
        cout<<endl;
  }
}
