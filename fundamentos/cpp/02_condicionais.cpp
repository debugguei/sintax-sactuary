// Condicionais: if / else if / else e switch
#include <iostream>
using namespace std;

int main() {
    double nota;
    cout << "Digite a nota (0 a 10): ";
    cin >> nota;

    if (nota < 0 || nota > 10) {
        cout << "Nota inválida.\n";
    } else if (nota >= 7) {
        cout << "Aprovado\n";
    } else if (nota >= 5) {
        cout << "Recuperação\n";
    } else {
        cout << "Reprovado\n";
    }

    int dia;
    cout << "\nDia da semana (1-7): ";
    cin >> dia;

    switch (dia) {
        case 1: cout << "Domingo\n"; break;
        case 2: case 3: case 4: case 5: case 6:
            cout << "Dia útil\n"; break;
        case 7: cout << "Sábado\n"; break;
        default: cout << "Dia inválido\n";
    }
    return 0;
}
