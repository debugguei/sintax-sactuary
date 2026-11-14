// GABARITO - Extras 04 - Lógica e algoritmos
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

// ---- Extra 1 (médio): parentesesBalanceados ----
// Verifique se (), [] e {} estão balanceados e na ordem certa.
// Dica: use uma pilha (vector<char> com push_back/pop_back).
// Ex.: "([{}])" -> true; "(]" -> false; "" -> true
bool parentesesBalanceados(const string& s) {
    vector<char> pilha;
    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') pilha.push_back(c);
        else if (c == ')' || c == ']' || c == '}') {
            if (pilha.empty()) return false;
            char a = pilha.back(); pilha.pop_back();
            if ((c == ')' && a != '(') || (c == ']' && a != '[') || (c == '}' && a != '{')) return false;
        }
    }
    return pilha.empty();
}

// ---- Extra 2 (difícil): doisSomam ----
// Encontre índices i < j tais que v[i] + v[j] == alvo.
// Retorne {i, j} ou {-1, -1} se não existir.
// Ex.: {2,7,11,15}, alvo 9 -> {0,1}
pair<int, int> doisSomam(const vector<int>& v, int alvo) {
    for (size_t i = 0; i < v.size(); i++)
        for (size_t j = i + 1; j < v.size(); j++)
            if (v[i] + v[j] == alvo) return {static_cast<int>(i), static_cast<int>(j)};
    return {-1, -1};
}

// ---- Extra 3 (difícil): espiral ----
// Gere uma matriz n x n preenchida de 1 a n*n em espiral, no sentido horário.
// n=3 -> {{1,2,3},{8,9,4},{7,6,5}}
// Desafio extra: depois resolva em O(n^2) sem if gigante, usando 4 limites (topo, base, esq, dir).
vector<vector<int>> espiral(int n) {
    vector<vector<int>> m(n, vector<int>(n, 0));
    int topo = 0, base = n - 1, esq = 0, dir = n - 1, k = 1;
    while (topo <= base && esq <= dir) {
        for (int j = esq; j <= dir; j++) m[topo][j] = k++;
        topo++;
        for (int i = topo; i <= base; i++) m[i][dir] = k++;
        dir--;
        if (topo <= base) { for (int j = dir; j >= esq; j--) m[base][j] = k++; base--; }
        if (esq <= dir)   { for (int i = base; i >= topo; i--) m[i][esq] = k++; esq++; }
    }
    return m;
}

int main() {
    cout << "Extra 1: parentesesBalanceados\n";
    CHECK(parentesesBalanceados("([{}])"));
    CHECK(!parentesesBalanceados("(]"));
    CHECK(!parentesesBalanceados("(("));
    CHECK(parentesesBalanceados(""));
    CHECK(!parentesesBalanceados("())("));
    cout << "Extra 2: doisSomam\n";
    CHECK(doisSomam({2, 7, 11, 15}, 9) == make_pair(0, 1));
    CHECK(doisSomam({3, 2, 4}, 6) == make_pair(1, 2));
    CHECK(doisSomam({1, 2}, 10) == make_pair(-1, -1));
    cout << "Extra 3: espiral\n";
    CHECK(espiral(1) == vector<vector<int>>({{1}}));
    CHECK(espiral(3) == vector<vector<int>>({{1,2,3},{8,9,4},{7,6,5}}));
    CHECK(espiral(4) == vector<vector<int>>({{1,2,3,4},{12,13,14,5},{11,16,15,6},{10,9,8,7}}));
    cout << "\nResultado: " << ok_ << "/" << total_ << " testes passaram.\n";
    return ok_ == total_ ? 0 : 1;
}
