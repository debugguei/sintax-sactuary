// Desafios 02 - Condicionais
// Compile: g++ -std=c++17 -Wall arquivo.cpp -o app && ./app
// Regra: implemente as funções marcadas com TODO até todos os testes darem [OK].

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

static int ok_ = 0, total_ = 0;
#define CHECK(expr) do { total_++; if (expr) { ok_++; cout << "  [OK]     " #expr "\n"; } \
    else cout << "  [FALHOU] " #expr "\n"; } while (0)

// ---- Desafio 1 (fácil): maiorDeTres ----
// Retorne o maior entre três inteiros (sem usar std::max).
int maiorDeTres(int a, int b, int c) {
    // TODO
    return 0;
}

// ---- Desafio 2 (médio): anoBissexto ----
// Divisível por 4 e não por 100, ou divisível por 400.
// Ex.: 2024 -> true; 1900 -> false; 2000 -> true
bool anoBissexto(int ano) {
    // TODO
    return false;
}

// ---- Desafio 3 (difícil): classificaTriangulo ----
// Retorne "invalido", "equilatero", "isosceles" ou "escaleno".
// Inválido: algum lado <= 0 ou não vale a desigualdade triangular
// (cada lado deve ser menor que a soma dos outros dois).
string classificaTriangulo(int a, int b, int c) {
    // TODO
    return "";
}

int main() {
    cout << "Desafio 1: maiorDeTres\n";
    CHECK(maiorDeTres(1, 2, 3) == 3);
    CHECK(maiorDeTres(9, 2, 3) == 9);
    CHECK(maiorDeTres(-5, -2, -9) == -2);
    cout << "Desafio 2: anoBissexto\n";
    CHECK(anoBissexto(2024));
    CHECK(!anoBissexto(1900));
    CHECK(anoBissexto(2000));
    CHECK(!anoBissexto(2026));
    cout << "Desafio 3: classificaTriangulo\n";
    CHECK(classificaTriangulo(3, 3, 3) == "equilatero");
    CHECK(classificaTriangulo(3, 3, 4) == "isosceles");
    CHECK(classificaTriangulo(3, 4, 5) == "escaleno");
    CHECK(classificaTriangulo(1, 2, 3) == "invalido");
    CHECK(classificaTriangulo(0, 2, 2) == "invalido");
    cout << "\nResultado: " << ok_ << "/" << total_ << " testes passaram.\n";
    return ok_ == total_ ? 0 : 1;
}
