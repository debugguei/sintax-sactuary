// Validação de entrada e tratamento de erros
#include <iostream>
#include <limits>
#include <stdexcept>
using namespace std;

int lerInteiro(const string& msg, int min, int max) {
    int valor;
    while (true) {
        cout << msg;
        if (cin >> valor && valor >= min && valor <= max) return valor;
        if (cin.eof()) throw runtime_error("Entrada encerrada");
        cout << "Valor inválido. Digite entre " << min << " e " << max << ".\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

double dividir(double a, double b) {
    if (b == 0) throw invalid_argument("Divisão por zero");
    return a / b;
}

int main() {
    try {
        int idade = lerInteiro("Idade (0-120): ", 0, 120);
        cout << "Idade registrada: " << idade << '\n';

        int d = lerInteiro("Divisor (0-10): ", 0, 10);
        cout << "100 / " << d << " = " << dividir(100, d) << '\n';
    } catch (const invalid_argument& e) {
        cerr << "Erro: " << e.what() << '\n';
        return 1;
    } catch (const exception& e) {
        cerr << "Erro: " << e.what() << '\n';
        return 1;
    }
    return 0;
}
