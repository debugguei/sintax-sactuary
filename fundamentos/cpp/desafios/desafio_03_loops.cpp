// Desafios 03 - Loops
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

// ---- Desafio 1 (fácil): somaPares ----
// Some os números pares de 1 até n (inclusive).
// Ex.: somaPares(10) -> 30
int somaPares(int n) {
    // TODO
    return -1;
}

// ---- Desafio 2 (médio): fizzBuzz ----
// Para i de 1 até n: múltiplo de 3 -> "Fizz", de 5 -> "Buzz",
// de ambos -> "FizzBuzz", senão o próprio número como string.
vector<string> fizzBuzz(int n) {
    // TODO
    return {};
}

// ---- Desafio 3 (difícil): collatzPassos ----
// Conjectura de Collatz: se n é par, n = n/2; se ímpar, n = 3n+1.
// Conte quantos passos até chegar em 1. Ex.: 6 -> 8 passos (6,3,10,5,16,8,4,2,1)
// collatzPassos(1) = 0. Use long long para não estourar.
int collatzPassos(long long n) {
    // TODO
    return -1;
}

int main() {
    cout << "Desafio 1: somaPares\n";
    CHECK(somaPares(10) == 30);
    CHECK(somaPares(1) == 0);
    CHECK(somaPares(100) == 2550);
    cout << "Desafio 2: fizzBuzz\n";
    CHECK(fizzBuzz(5) == vector<string>({"1", "2", "Fizz", "4", "Buzz"}));
    CHECK(fizzBuzz(15).size() == 15 && fizzBuzz(15)[14] == "FizzBuzz");
    CHECK(fizzBuzz(0).empty());
    cout << "Desafio 3: collatzPassos\n";
    CHECK(collatzPassos(1) == 0);
    CHECK(collatzPassos(6) == 8);
    CHECK(collatzPassos(27) == 111);
    cout << "\nResultado: " << ok_ << "/" << total_ << " testes passaram.\n";
    return ok_ == total_ ? 0 : 1;
}
