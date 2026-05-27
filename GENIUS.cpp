#include <iostream>
#include <unistd.h>
using namespace std;

void dc() {cout<<"=========================================="<< endl;}
void pausa() {cin.get();}

int main () {
    
    int escolha;
    int pagina = 1;
    
    
        while(pagina != 0) {
            
            switch(pagina) {
                
            case 1:
                dc();
                cout << "||         BEM VINDO AO GENIUS         ||" << endl;
                dc();
                cout << "||                                     ||" << endl;
                cout << "||  [ 1 ]  ======== JOGAR ========     ||" << endl;
                cout << "||  [ 2 ]  ======== SOBRE ========     ||" << endl;
                cout << "||  [ 3 ]  ======== SAIR  ========     ||" << endl;
                cout << "||                                     ||" << endl;
                dc();
                cout << "Escolha uma opcao >> ";
                cin >> escolha;
        
               
                
                if (escolha==1) {
                    pagina = 4;
                    system("clear");
                       sleep(1);
                    
                }
                else if (escolha==2) {
                    pagina = 2;
                    system("clear");
                       sleep(1);
                    
                }
                else if (escolha==3) {
                    pagina = 3;
                    system("clear");
                       sleep(1);
                    
                }
                else {cout<<"opçao invalida"<< endl;}
                break;
                
                
                
            case 2:
                dc();
                cout<<"|| //===produzido e programado por Jonas===// ||"<<endl;
                cout<<"|| //===feito em maio/2026===//               ||"<< endl;
                cout<<"|| //===supervisionado por felsky===//        ||"<< endl;
                cout<<"|| //===digite 1 para voltar===//             || "<< endl;
                cout<<"digite aqui >> ";  cin>>escolha;
                if (escolha==1) { 
                    pagina = 1;
                    system("clear");
                       sleep(1);
                    
                }
                    else { pagina = 2;}
                    break;
                
                           
                
            case 4:
            dc();
                cout << "||        QUAL A DIFICULDADE?           ||" << endl;
                dc();
                cout << "||                                      ||" << endl;
                cout << "||  [ 1 ]  ======== Noob   ========     ||" << endl;
                cout << "||  [ 2 ]  ======== Pró    ========     ||" << endl;
                cout << "||  [ 3 ]  ======== Hacker ========     ||" << endl;
                cout << "||                                      ||" << endl;
                dc();
                cout << "Escolha uma opcao >> ";
                cin >> pagina;
         
                
                
                
            }
        }
        
        
        
        
        
        
        
        
        
}
