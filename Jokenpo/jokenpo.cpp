#include <iostream>
#include <time.h>
#include <string>
#include <new>
#include <locale.h>
using namespace std;
int main()
{
    setlocale(LC_ALL,"");
    int pc,jogador;
    char jogar;
    string *itens = new string[3];
    itens[0] = "tesoura";
    itens[1] = "pedra";
    itens[2] = "papel";
    srand(time(0));
    do
    {
        pc = rand()%3;
        do
        {
            cout << "Digite sua escolha: \n[0] Tesoura     [1] Pedra     [2] Papel" << endl;
            cin >> jogador;
        }
        while(jogador < 0  || jogador >2);
        if(jogador == pc)
        {
            cout << "o computador escolheu "<< itens[pc] << ", deu empate.\n" << endl;
        }
        if((jogador == 1 && pc == 2) || (jogador == 0 && pc == 1) )
        {
            cout << "O computador escolheu " << itens[pc] << ", você perdeu.\n" << endl;
        }
        if ((jogador == 1 && pc == 0) || (jogador == 2 && pc == 1))
        {
            cout << "O computador escolheu " << itens[pc] << ", você ganhou.\n" << endl;
        }
        do
        {
            cout << "deseja jogar de novo?\n[s]sim   [n]não" << endl;
            cin >> jogar;
        }while(toupper(jogar) != 'S' && toupper(jogar) != 'N');
    }while(toupper(jogar) == 'S');
    return 0;
}
