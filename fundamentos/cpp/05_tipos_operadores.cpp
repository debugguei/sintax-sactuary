// Tipos primitivos, operadores e conversões
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int i = 7;
    double d = 2.0;
    char c = 'A';
    bool b = true;

    cout << "int max: " << INT_MAX << ", sizeof(int): " << sizeof(int) << '\n';
    cout << "7 / 2 = " << i / 2 << " (divisão inteira)\n";
    cout << "7 / 2.0 = " << i / d << '\n';
    cout << "7 % 2 = " << i % 2 << '\n';
    cout << "static_cast<int>(3.99) = " << static_cast<int>(3.99) << '\n';
    cout << "char 'A' + 1 = " << static_cast<char>(c + 1) << '\n';
    cout << "Código ASCII de 'A': " << static_cast<int>(c) << '\n';

    int x = 5;
    x += 3; x *= 2; x--;
    cout << "x = " << x << '\n';
    cout << "bool: " << b << ", !b: " << !b << '\n';
    cout << "(x > 10 && x < 20): " << (x > 10 && x < 20) << '\n';
    return 0;
}
