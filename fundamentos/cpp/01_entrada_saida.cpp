// Entrada e saída: cin, cout, getline
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;
    int idade;
    double altura;

    cout << "Qual seu nome? ";
    getline(cin, nome);

    cout << "Idade: ";
    cin >> idade;

    cout << "Altura (m): ";
    cin >> altura;

    cout << "\nOlá, " << nome << "!\n";
    cout << "Você tem " << idade << " anos e " << altura << " m.\n";
    cout << "Ano de nascimento aprox.: " << 2026 - idade << '\n';
    return 0;
}
