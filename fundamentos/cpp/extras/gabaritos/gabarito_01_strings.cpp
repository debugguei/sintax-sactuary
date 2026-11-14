// GABARITO - Extras 01 - Strings
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

// ---- Extra 1 (médio): cifraCesar ----
// Desloque cada letra k posições no alfabeto, mantendo maiúscula/minúscula.
// Não-letras ficam iguais. k pode ser negativo ou maior que 26.
// Ex.: ("xyz", 3) -> "abc"
string cifraCesar(string s, int k) {
    for (char& c : s) {
        if (isalpha(static_cast<unsigned char>(c))) {
            char b = isupper(static_cast<unsigned char>(c)) ? 'A' : 'a';
            c = b + ((c - b + k) % 26 + 26) % 26;
        }
    }
    return s;
}

// ---- Extra 2 (médio): ehAnagrama ----
// Verifique se duas palavras/frases são anagramas, ignorando maiúsculas e espaços.
// Ex.: "Roma" e "Amor" -> true
bool ehAnagrama(const string& a, const string& b) {
    auto limpa = [](const string& s) {
        string r;
        for (char c : s) if (isalpha(static_cast<unsigned char>(c))) r += tolower(static_cast<unsigned char>(c));
        sort(r.begin(), r.end());
        return r;
    };
    return limpa(a) == limpa(b);
}

// ---- Extra 3 (difícil): palavraMaisLonga ----
// Retorne a primeira palavra mais longa da frase (palavras separadas por espaços).
// Frase vazia -> "". Ex.: "o rato roeu a roupa" -> "roupa"
string palavraMaisLonga(const string& frase) {
    istringstream ss(frase);
    string w, melhor;
    while (ss >> w)
        if (w.size() > melhor.size()) melhor = w;
    return melhor;
}

int main() {
    cout << "Extra 1: cifraCesar\n";
    CHECK(cifraCesar("abc", 3) == "def");
    CHECK(cifraCesar("xyz", 3) == "abc");
    CHECK(cifraCesar("Hello, World!", 5) == "Mjqqt, Btwqi!");
    CHECK(cifraCesar("def", -3) == "abc");
    CHECK(cifraCesar("abc", 29) == "def");
    cout << "Extra 2: ehAnagrama\n";
    CHECK(ehAnagrama("Roma", "Amor"));
    CHECK(!ehAnagrama("abc", "abd"));
    CHECK(ehAnagrama("Dom Pedro", "Pedro Dom"));
    CHECK(!ehAnagrama("aab", "ab"));
    cout << "Extra 3: palavraMaisLonga\n";
    CHECK(palavraMaisLonga("o rato roeu a roupa") == "roupa");
    CHECK(palavraMaisLonga("ab cd") == "ab");
    CHECK(palavraMaisLonga("") == "");
    CHECK(palavraMaisLonga("  c++   programar  ") == "programar");
    cout << "\nResultado: " << ok_ << "/" << total_ << " testes passaram.\n";
    return ok_ == total_ ? 0 : 1;
}
