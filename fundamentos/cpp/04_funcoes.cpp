// Funções: parâmetros, retorno, referência e sobrecarga
#include <iostream>
using namespace std;

int fatorial(int n) {
    return (n <= 1) ? 1 : n * fatorial(n - 1);
}

bool ehPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

void trocar(int &a, int &b) {
    int tmp = a; a = b; b = tmp;
}

double area(double raio)             { return 3.14159265 * raio * raio; }
double area(double base, double alt) { return base * alt / 2; }

int main() {
    cout << "5! = " << fatorial(5) << '\n';
    cout << "17 é primo? " << (ehPrimo(17) ? "sim" : "não") << '\n';

    int a = 1, b = 2;
    trocar(a, b);
    cout << "a=" << a << " b=" << b << '\n';

    cout << "Círculo r=2: " << area(2.0) << '\n';
    cout << "Triângulo 3x4: " << area(3.0, 4.0) << '\n';
    return 0;
}
