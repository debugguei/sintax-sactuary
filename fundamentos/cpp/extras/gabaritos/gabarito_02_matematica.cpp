// GABARITO - Extras 02 - Matemática
// Tente resolver antes de olhar!

#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <sstream>
#include <algorithm>
#include <cctype>
using namespace std;

static int ok_ = 0, total_ = 0;
#define CHECK(expr) do { total_++; if (expr) { ok_++; cout << "  [OK]     " #expr "\n"; } \
    else cout << "  [FALHOU] " #expr "\n"; } while (0)

// ---- Extra 1 (médio): mmc ----
// Mínimo múltiplo comum de dois inteiros positivos.
// Dica: mmc = a / mdc * b (divida antes para evitar overflow).
long long mmc(long long a, long long b) {
    long long x = a, y = b;
    while (y) { long long t = x % y; x = y; y = t; }
    return a / x * b;
}

// ---- Extra 2 (médio): paraBinario ----
// Converta um inteiro >= 0 para string binária, sem usar bitset.
// Ex.: 5 -> "101"; 0 -> "0"
string paraBinario(int n) {
    if (n == 0) return "0";
    string r;
    while (n > 0) { r += char('0' + n % 2); n /= 2; }
    reverse(r.begin(), r.end());
    return r;
}

// ---- Extra 3 (difícil): paraRomano ----
// Converta de 1 a 3999 para algarismos romanos.
// Dica: tabela de pares (valor, símbolo) em ordem decrescente, incluindo CM, CD, XC, XL, IX, IV.
string paraRomano(int n) {
    const vector<pair<int, string>> t = {{1000,"M"},{900,"CM"},{500,"D"},{400,"CD"},{100,"C"},{90,"XC"},{50,"L"},{40,"XL"},{10,"X"},{9,"IX"},{5,"V"},{4,"IV"},{1,"I"}};
    string r;
    for (const auto& p : t)
        while (n >= p.first) { r += p.second; n -= p.first; }
    return r;
}

int main() {
    cout << "Extra 1: mmc\n";
    CHECK(mmc(4, 6) == 12);
    CHECK(mmc(7, 5) == 35);
    CHECK(mmc(12, 12) == 12);
    CHECK(mmc(1000000007LL, 2) == 2000000014LL);
    cout << "Extra 2: paraBinario\n";
    CHECK(paraBinario(0) == "0");
    CHECK(paraBinario(5) == "101");
    CHECK(paraBinario(255) == "11111111");
    CHECK(paraBinario(1024) == "10000000000");
    cout << "Extra 3: paraRomano\n";
    CHECK(paraRomano(4) == "IV");
    CHECK(paraRomano(58) == "LVIII");
    CHECK(paraRomano(1994) == "MCMXCIV");
    CHECK(paraRomano(3999) == "MMMCMXCIX");
    cout << "\nResultado: " << ok_ << "/" << total_ << " testes passaram.\n";
    return ok_ == total_ ? 0 : 1;
}
