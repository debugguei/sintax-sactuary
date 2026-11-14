// Matrizes (vetor de vetores)
#include <iostream>
#include <vector>
using namespace std;

using Matriz = vector<vector<int>>;

void imprimir(const Matriz& m) {
    for (const auto& linha : m) {
        for (int x : linha) cout << x << '\t';
        cout << '\n';
    }
}

Matriz transpor(const Matriz& m) {
    Matriz t(m[0].size(), vector<int>(m.size()));
    for (size_t i = 0; i < m.size(); i++)
        for (size_t j = 0; j < m[0].size(); j++)
            t[j][i] = m[i][j];
    return t;
}

Matriz multiplicar(const Matriz& a, const Matriz& b) {
    Matriz r(a.size(), vector<int>(b[0].size(), 0));
    for (size_t i = 0; i < a.size(); i++)
        for (size_t j = 0; j < b[0].size(); j++)
            for (size_t k = 0; k < b.size(); k++)
                r[i][j] += a[i][k] * b[k][j];
    return r;
}

int main() {
    Matriz a = {{1, 2, 3}, {4, 5, 6}};
    cout << "A:\n"; imprimir(a);
    cout << "\nA transposta:\n"; imprimir(transpor(a));
    cout << "\nA * A^T:\n"; imprimir(multiplicar(a, transpor(a)));
    return 0;
}
