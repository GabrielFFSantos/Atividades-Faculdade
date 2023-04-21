#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

struct Aluno
{
    int codigo;
    string nome;
    float nota;
};

Aluno aluno_especial;

void menu();
void inicializar();
void imprimir();
void cadastrar();

int main()
{
    setlocale(LC_ALL, "portuguese");
    menu();
    return 0;
}

void menu()
{
    int opcao;
    do
    {
        cout << endl << "Opcoes: " << endl;
        cout << "1. Inicializar a Estrutura" << endl;
        cout << "2. Imprimir a Estrutura" << endl;
        cout << "3. Cadastrar Aluno Especial" << endl;
        cout << "4. Para sair." << endl << endl;
        cout << "Digite a opcao desejada: ";
        cin >> opcao;

        switch (opcao)
        {
            case 1:
                inicializar();
                break;
            case 2:
                imprimir();
                break;
            case 3:
                cadastrar();
                break;
            default:
                cout << endl << "Opcao nao existente." << endl;
                break;
        }
    } while (opcao != 4);
}

void inicializar()
{
    aluno_especial.codigo = 0;
    aluno_especial.nome = "NULL";
    aluno_especial.nota = 0.0;
}

void cadastrar()
{
    cout << "Digite o codigo do aluno especial: ";
    cin >> aluno_especial.codigo;
    cout << "Digite o nome do aluno especial: ";
    cin >> aluno_especial.nome;
    cout << "Digite a nota do aluno especial: ";
    cin >> aluno_especial.nota;
}

void imprimir()
{
    cout << endl << "O codigo do aluno especial e: " << aluno_especial.codigo << endl;
    cout << "O nome do aluno especial e: " << aluno_especial.nome << endl;
    cout << "A nota do aluno especial e: " << aluno_especial.nota << endl << endl;
}
