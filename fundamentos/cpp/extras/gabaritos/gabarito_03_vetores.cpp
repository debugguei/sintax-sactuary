// GABARITO - Extras 03 - Vetores
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

// ---- Extra 1 (médio): segundoMaior ----
// Retorne o segundo maior valor DISTINTO. Se não existir, retorne -1.
// Ex.: {5,1,9,9,3} -> 5; {2,2} -> -1
int segundoMaior(const vector<int>& v) {
    bool temMax = false, temSeg = false;
    int mx = 0, seg = 0;
    for (int x : v) {
        if (!temMax || x > mx) {
            if (temMax) { seg = mx; temSeg = true; }
            mx = x; temMax = true;
        } else if (x < mx && (!temSeg || x > seg)) {
            seg = x; temSeg = true;
        }
    }
    return temSeg ? seg : -1;
}

// ---- Extra 2 (médio): removerDuplicados ----
// Remova duplicados mantendo a ordem da primeira aparição.
// Ex.: {1,2,1,3,2} -> {1,2,3}
vector<int> removerDuplicados(const vector<int>& v) {
    vector<int> r;
    for (int x : v)
        if (find(r.begin(), r.end(), x) == r.end()) r.push_back(x);
    return r;
}

// ---- Extra 3 (difícil): rotacionar ----
// Gire o vetor k posições para a DIREITA. k pode ser maior que o tamanho.
// Ex.: {1,2,3,4,5}, k=2 -> {4,5,1,2,3}. Vetor vazio -> vazio.
vector<int> rotacionar(vector<int> v, int k) {
    if (v.empty()) return v;
    k %= static_cast<int>(v.size());
    rotate(v.begin(), v.end() - k, v.end());
    return v;
}

int main() {
    cout << "Extra 1: segundoMaior\n";
    CHECK(segundoMaior({5, 1, 9, 9, 3}) == 5);
    CHECK(segundoMaior({2, 2}) == -1);
    CHECK(segundoMaior({7}) == -1);
    CHECK(segundoMaior({-5, -1, -3}) == -3);
    cout << "Extra 2: removerDuplicados\n";
    CHECK(removerDuplicados({1, 2, 1, 3, 2}) == vector<int>({1, 2, 3}));
    CHECK(removerDuplicados({}).empty());
    CHECK(removerDuplicados({4, 4, 4}) == vector<int>({4}));
    cout << "Extra 3: rotacionar\n";
    CHECK(rotacionar({1, 2, 3, 4, 5}, 2) == vector<int>({4, 5, 1, 2, 3}));
    CHECK(rotacionar({1, 2, 3}, 7) == vector<int>({3, 1, 2}));
    CHECK(rotacionar({}, 3).empty());
    CHECK(rotacionar({1, 2, 3}, 0) == vector<int>({1, 2, 3}));
    cout << "\nResultado: " << ok_ << "/" << total_ << " testes passaram.\n";
    return ok_ == total_ ? 0 : 1;
}
