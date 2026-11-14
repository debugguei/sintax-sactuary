// GABARITO - Desafios 04 - Funções
// Tente resolver antes de olhar!

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

static int ok_ = 0, total_ = 0;
#define CHECK(expr) do { total_++; if (expr) { ok_++; cout << "  [OK]     " #expr "\n"; } \
    else cout << "  [FALHOU] " #expr "\n"; } while (0)

// ---- Desafio 1 (fácil): contarPrimosAte ----
// Conte quantos primos existem de 2 até n (inclusive).
// Dica: crie uma função auxiliar ehPrimo. Ex.: contarPrimosAte(10) -> 4
int contarPrimosAte(int n) {
    int c = 0;
    for (int k = 2; k <= n; k++) {
        bool primo = true;
        for (int d = 2; d * d <= k; d++)
            if (k % d == 0) { primo = false; break; }
        if (primo) c++;
    }
    return c;
}

// ---- Desafio 2 (médio): minMax (referência) ----
// Preencha mn e mx (passados por referência) com o menor e o maior de v.
// Assuma que v não é vazio.
void minMax(const vector<int>& v, int& mn, int& mx) {
    mn = mx = v[0];
    for (int x : v) {
        if (x < mn) mn = x;
        if (x > mx) mx = x;
    }
}

// ---- Desafio 3 (difícil): media (sobrecarga) ----
// Implemente DUAS funções com o mesmo nome:
// media(int a, int b) -> média de dois inteiros como double (7,2 -> 4.5)
// media(const vector<double>& v) -> média do vetor; vazio -> 0
double media(int a, int b) {
    return (a + b) / 2.0;
}


// (continuação do desafio 3 - a sobrecarga do vetor)
double media(const vector<double>& v) {
    if (v.empty()) return 0;
    double s = 0;
    for (double x : v) s += x;
    return s / v.size();
}

int main() {
    cout << "Desafio 1: contarPrimosAte\n";
    CHECK(contarPrimosAte(10) == 4);
    CHECK(contarPrimosAte(1) == 0);
    CHECK(contarPrimosAte(100) == 25);
    cout << "Desafio 2: minMax (referência)\n";
    { int a = 0, b = 0; minMax({3, 9, -2, 7}, a, b); CHECK(a == -2 && b == 9); }
    { int a = 0, b = 0; minMax({5}, a, b); CHECK(a == 5 && b == 5); }
    cout << "Desafio 3: media (sobrecarga)\n";
    CHECK(media(7, 2) == 4.5);
    CHECK(media(vector<double>{1.0, 2.0, 6.0}) == 3.0);
    CHECK(media(vector<double>{}) == 0.0);
    cout << "\nResultado: " << ok_ << "/" << total_ << " testes passaram.\n";
    return ok_ == total_ ? 0 : 1;
}
