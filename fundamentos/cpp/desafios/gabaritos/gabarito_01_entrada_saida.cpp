// GABARITO - Desafios 01 - Entrada e saída (formatação)
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

// ---- Desafio 1 (fácil): saudacao ----
// Retorne exatamente: "Olá, <nome>! Você tem <idade> anos."
// Ex.: saudacao("Ana", 20) -> "Olá, Ana! Você tem 20 anos."
string saudacao(const string& nome, int idade) {
    return "Olá, " + nome + "! Você tem " + to_string(idade) + " anos.";
}

// ---- Desafio 2 (médio): somaDaLinha ----
// Receba uma linha com números separados por espaço e retorne a soma.
// Dica: istringstream. Ex.: "3 4 5" -> 12; linha vazia -> 0
int somaDaLinha(const string& linha) {
    istringstream ss(linha);
    int x, soma = 0;
    while (ss >> x) soma += x;
    return soma;
}

// ---- Desafio 3 (difícil): formatarPreco ----
// Formate um valor como "R$ 12.50" (sempre 2 casas decimais).
// Dica: ostringstream com fixed e setprecision(2).
// Ex.: 3 -> "R$ 3.00"; 0.456 -> "R$ 0.46"
string formatarPreco(double valor) {
    ostringstream os;
    os << "R$ " << fixed << setprecision(2) << valor;
    return os.str();
}

int main() {
    cout << "Desafio 1: saudacao\n";
    CHECK(saudacao("Ana", 20) == "Olá, Ana! Você tem 20 anos.");
    CHECK(saudacao("Rafael", 26) == "Olá, Rafael! Você tem 26 anos.");
    cout << "Desafio 2: somaDaLinha\n";
    CHECK(somaDaLinha("3 4 5") == 12);
    CHECK(somaDaLinha("") == 0);
    CHECK(somaDaLinha("-2 10 -3") == 5);
    cout << "Desafio 3: formatarPreco\n";
    CHECK(formatarPreco(12.5) == "R$ 12.50");
    CHECK(formatarPreco(3) == "R$ 3.00");
    CHECK(formatarPreco(0.456) == "R$ 0.46");
    cout << "\nResultado: " << ok_ << "/" << total_ << " testes passaram.\n";
    return ok_ == total_ ? 0 : 1;
}
