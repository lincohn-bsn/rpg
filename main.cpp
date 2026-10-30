#include <iostream>
#include <string>
#include <locale>

using namespace std;

struct FixaPersonagem{ //A estrutura da fixa do personagem
string nome;
int idade;
int nivel;
string raca;
int pontosDeVida;
string nomeDoUsuario;
};

int main(){//Bloco de Comandos
    setlocale(LC_ALL,"Portuguese_Brazil");//colocando português
    int menu1;

    struct FixaPersonagem personagem;//Criando a variavel personagem que tem as informaçoes de FixaPersonagem

    while (true){ //criação do laço de repetição
    cout<<"====================================================================="<<endl; //Menu Principal
    cout<<"                           Menu de Escolha                           "<<endl;
    cout<<"                               Opções                                "<<endl;
    cout<<endl;
    cout<<" 1) Cadastrar personagens "<<endl;
    cout<<" 2) Lista Personagens ja cadastrados "<<endl;
    cout<<" 3) Edição de dos cadastros dos personagens "<<endl;
    cout<<" 4) Relatórios "<<endl;
    cout<<" 0) Sair "<<endl;
    cout<<"====================================================================="<<endl;
    cin>>menu1;//a escolha do usuario do menu
    system("cls");//limpar a tela
        if(menu1 == 0){//comando para sair quando digitar 0
            return 0;
        }//parente do menu1 = 0

        if(menu1 == 1){//menu do personagem
            cout<<"====================================================================="<<endl;
            cout<<"                        Criação do Personagem                        "<<endl;
            cout<<"Digite o nome do/a personagem"<<endl;
            cin>>personagem.nome;
            cout<<"Qual a idade do/a "<<personagem.nome<<" :"<<endl;
            cin>>personagem.idade;
            cout<<"Qual o nível do/a "<<personagem.nome<<" :"<<endl;
            cin>>personagem.nivel;
            cout<<"Qual a raça do/a "<<personagem.nome<<" :"<<endl;
            cin>>personagem.raca;
            cout<<"Qual a quantidade de vida do/a "<<personagem.nome<<" :"<<endl;
            cin>>personagem.pontosDeVida;
            cout<<"Qual o nome do usuário que crio o personagem :"<<endl;
            cin>>personagem.nomeDoUsuario;
            cout<<"====================================================================="<<endl;
            system("pause");
            system("cls");//limpando a tela
        }//parente do menu1 = 1
    }//parentese do while do menu principal
    return 0;
}
