// Leitura e escrita de arquivos com fstream
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    const string caminho = "notas.txt";

    ofstream out(caminho);
    if (!out) {
        cerr << "Não foi possível criar o arquivo.\n";
        return 1;
    }
    out << "Ana 8.5\nBruno 6.0\nCarla 9.7\n";
    out.close();

    ifstream in(caminho);
    if (!in) {
        cerr << "Não foi possível abrir o arquivo.\n";
        return 1;
    }

    string linha, nome;
    double nota, soma = 0;
    int n = 0;
    while (getline(in, linha)) {
        istringstream ss(linha);
        if (ss >> nome >> nota) {
            cout << nome << ": " << nota << '\n';
            soma += nota;
            n++;
        }
    }
    if (n > 0) cout << "Média: " << soma / n << '\n';

    ofstream app(caminho, ios::app);
    app << "Diego 7.2\n";
    cout << "Linha adicionada ao final de " << caminho << '\n';
    return 0;
}
