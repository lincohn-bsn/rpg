
#include <iostream>
#include <fstream>
#include <string>
#include <locale>
#include <cstdlib>

using namespace std;

// Função para pausar e limpar a tela
void limpar_tela() {
    system("pause");
    system("cls");
}

// Estrutura com as informações da ficha do personagem
struct ficha_personagem {
    string nome;
    int idade;
    int nivel;
    string raca;
    int pontos_de_vida;
    string nome_do_usuario;
};

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");

    int menu_principal;

    // Criando a variável do personagem
    ficha_personagem personagem;

    // Laço de repetição do menu principal
    while (true) {

        cout << "============================================================" << endl;
        cout << "                     MENU PRINCIPAL                        " << endl;
        cout << "============================================================" << endl;
        cout << endl;

        cout << "  1) Cadastrar personagens" << endl;
        cout << "  2) Listar personagens cadastrados" << endl;
        cout << "  3) Editar cadastro dos personagens" << endl;
        cout << "  4) Relatorios" << endl;
        cout << "  0) Sair" << endl;

        cout << endl;
        cout << "============================================================" << endl;
        cout << "Escolha uma opcao: ";
        cin >> menu_principal;

        system("cls");

        // Verificando a opção escolhida
        switch (menu_principal) {

            // Sair do programa
            case 0:

                cout << "Encerrando o programa..." << endl;

                return 0;

            // Cadastro de personagens
            case 1:

                cout << "============================================================" << endl;
                cout << "                  CADASTRO DE PERSONAGEM                    " << endl;
                cout << "============================================================" << endl;

                cin.ignore();

                cout << "Digite o nome do personagem: ";
                getline(cin, personagem.nome);

                cout << "Qual a idade de " << personagem.nome << "? ";
                cin >> personagem.idade;

                cout << "Qual o nivel de " << personagem.nome << "? ";
                cin >> personagem.nivel;

                cin.ignore();

                cout << "Qual a raca de " << personagem.nome << "? ";
                getline(cin, personagem.raca);

                cout << "Qual a quantidade de pontos de vida de "
                     << personagem.nome << "? ";
                cin >> personagem.pontos_de_vida;

                cin.ignore();

                cout << "Digite o nome do usuario que criou o personagem: ";
                getline(cin, personagem.nome_do_usuario);

                cout << endl;
                cout << "============================================================" << endl;
                cout << "          PERSONAGEM CADASTRADO COM SUCESSO!                " << endl;
                cout << "============================================================" << endl;

                limpar_tela();

                break;

            // Listagem de personagens
            case 2:

                cout << "============================================================" << endl;
                cout << "              PERSONAGENS CADASTRADOS                       " << endl;
                cout << "============================================================" << endl;

                limpar_tela();

                break;

            // Edição de personagens
            case 3:

                cout << "============================================================" << endl;
                cout << "                  EDICAO DE PERSONAGEM                      " << endl;
                cout << "============================================================" << endl;

                limpar_tela();

                break;

            // Relatórios
            case 4:

                cout << "============================================================" << endl;
                cout << "                       RELATORIOS                            " << endl;
                cout << "============================================================" << endl;

                limpar_tela();

                break;

            // Opção inválida
            default:

                cout << "Opcao nao encontrada!" << endl;

                limpar_tela();

                break;
        }
    }

    return 0;
}
