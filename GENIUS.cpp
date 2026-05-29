#include <iostream>
#include <unistd.h>
//Usando a biblioteca conio, funciona no codeblocks



#include <time.h> //para tempo
using namespace std;

void dc() {cout<<"=========================================="<< endl;}
void pausa() {cin.get();}

int main () {
    srand(time(0));
    
    int sequencia[18];
    int i=0;
    int escolha;
    int pagina = 1;
    int velocidade;
    int tamanho;
    int limite;
    
    
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
                       sleep(0.6);
                    
                }
                else if (escolha==2) {
                    pagina = 2;
                    system("clear");
                       sleep(0.6);
                    
                }
                else if (escolha==3) {
                    pagina = 3;
                    system("clear");
                       sleep(0.6);
                    
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
                       sleep(0.6);
                    
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
                cout <<"||  [ 4 ]  ======== voltar ========     ||" << endl;
                dc();
                cout << "Escolha uma opcao >> ";
                cin >> escolha;
                
                if (escolha==1) {
                    
                    limite = 6;
                    velocidade = 4;
                    tamanho= 1;
                    pagina=5;
                     system("clear");
                       sleep(0.8);
                }
                else if (escolha==2) {
                    
                    limite = 9;
                    velocidade = 50000;
                    tamanho=3;
                    pagina = 5;
                     system("clear");
                       sleep(0.8);
                }
                else if (escolha==3) {
                    
                    limite = 18;
                    velocidade = 0.2;
                    tamanho=6;
                    pagina = 5;
                     system("clear");
                       sleep(0.8);
                } 
                else if (escolha==4) {
                    
                    pagina=1;
                     system("clear");
                       sleep(0.6);
                }
                else { pagina = 4;
                     system("clear");
                       sleep(1);
                }
                break;
                
                case 5:
                
            while(i<=limite) {
                
                sequencia[i] = rand()%4+1;
                
             for(int x=0; x<i; x++) {
            
            cout << sequencia[x] << " " << flush;
            
              usleep(velocidade);
                }
            
                sleep(2);
            
                system("clear");
            
                i++;
            
            break;
         
                
                
            }
            }

        }
        
        
        
        
        
        
        
        
        
}
