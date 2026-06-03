#include <iostream>
#include <unistd.h>
#include <time.h> 
#include <cstdlib>

using namespace std;

void dc() { cout << "==========================================" << endl; }

int main () {
    srand(time(0));
    
    int sequencia[18];
    int escolha;
    int pagina = 1;
    int velocidade;
    int limite;
    int rodada_atual;
    bool jogando;
    int resposta_jogador;
    
    while(pagina != 0) {
        
        switch(pagina) {
                
            case 1: // MENU PRINCIPAL
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
               
                if (escolha == 1) {
                    pagina = 4;
                    system("clear");
                    usleep(600000);
                }
                else if (escolha == 2) {
                    pagina = 2;
                    system("clear");
                    usleep(600000);
                }
                else if (escolha == 3) {
                    pagina = 0; 
                    system("clear");
                    cout << "Obrigado por jogar! Ate breve!" << endl;
                }
                else {
                    cout << "Opcao invalida" << endl;
                    usleep(1000000);
                    system("clear");
                }
                break;
                
            case 2: // SOBRE
                dc();
                cout << "|| //===produzido e programado por Jonas===// ||" << endl;
                cout << "|| //===feito em maio/2026===//               ||" << endl;
                cout << "|| //===supervisionado por felsky===//        ||" << endl;
                cout << "|| //===digite 1 para voltar===//             || " << endl;
                dc();
                cout << "digite aqui >> ";  cin >> escolha;
                if (escolha == 1) { 
                    pagina = 1;
                    system("clear");
                    usleep(600000);
                } else { 
                    pagina = 2;
                    system("clear");
                }
                break;
                
            case 4: 
                dc();
                cout << "||        QUAL A DIFICULDADE?           ||" << endl;
                dc();
                cout << "||                                      ||" << endl;
                cout << "||  [ 1 ]  ======== Noob   ========     ||" << endl;
                cout << "||  [ 2 ]  ======== Pro    ========     ||" << endl;
                cout << "||  [ 3 ]  ======== Hacker ========     ||" << endl;
                cout << "||  [ 4 ]  ======== Voltar ========     ||" << endl;
                dc();
                cout << "Escolha uma opcao >> ";
                cin >> escolha;
                
                if (escolha == 1) {
                    limite = 6;
                    velocidade = 800000; // 0.8
                    pagina = 5;
                }
                else if (escolha == 2) {
                    limite = 9;
                    velocidade = 400000; // 0.4
                    pagina = 5;
                }
                else if (escolha == 3) {
                    limite = 18;
                    velocidade = 150000; // 0.15
                    pagina = 5;
                } 
                else if (escolha == 4) {
                    pagina = 1;
                }
                else { 
                    pagina = 4;
                }
                system("clear");
                usleep(600000);
                break;
                
            case 5: 
                for(int j = 0; j < limite; j++) {
                    sequencia[j] = rand() % 4 + 1;
                }
                
                rodada_atual = 1;
                jogando = true;
                
                // Loop principal das rodadas do jogo
                while(rodada_atual <= limite && jogando) {
                    dc();
                    cout << "||            RODADA " << rodada_atual << " / " << limite << "         ||" << endl;
                    dc();
                    cout << "Preste atencao na sequencia..." << endl;
                    usleep(1500000); //1.5
                    
                   
                    for(int x = 0; x < rodada_atual; x++) {
                        system("clear");
                        dc();
                        cout << "\n\t\t[ " << sequencia[x] << " ]\n" << endl;
                        dc();
                        usleep(velocidade); 
                        
                        system("clear"); 
                        usleep(200000);  // 0.2
                    }
                    
                   
                    cout << "Sua vez! Digite a sequencia correta" << endl;
                    for(int x = 0; x < rodada_atual; x++) {
                        cout << "Numero " << x + 1 << " >> ";
                        cin >> resposta_jogador;
                        
                        // 4. Compara a resposta
                        if(resposta_jogador != sequencia[x]) {
                            jogando = false; // Errou!
                            break; 
                        }
                    }
                    
                    if(jogando) {
                        cout << "\nBoa! Voce acertou a rodada!" << endl;
                        rodada_atual++;
                        usleep(1500000);
                        system("clear");
                    }
                }
                
                
                system("clear");
                dc();
                if(!jogando) {
                    cout << "||             GAME OVER!               ||" << endl;
                    cout << "||       Voce parou na rodada: " << rodada_atual << "        ||" << endl;
                } else {
                    cout << "||         PARABENS! VOCE VENCEU!       ||" << endl;
                }
                dc();
                cout << "Pressione qualquer numero para voltar ao menu: ";
                cin >> escolha;
                
                pagina = 1;
                system("clear");
                break;
        }
    }
    return 0;
}
