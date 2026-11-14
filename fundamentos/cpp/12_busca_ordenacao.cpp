// Busca linear/binária e ordenações básicas
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int buscaLinear(const vector<int>& v, int alvo) {
    for (size_t i = 0; i < v.size(); i++)
        if (v[i] == alvo) return static_cast<int>(i);
    return -1;
}

int buscaBinaria(const vector<int>& v, int alvo) {
    int lo = 0, hi = static_cast<int>(v.size()) - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (v[mid] == alvo) return mid;
        if (v[mid] < alvo) lo = mid + 1;
        else hi = mid - 1;
    }
    return -1;
}

void bubbleSort(vector<int>& v) {
    for (size_t i = 0; i + 1 < v.size(); i++) {
        bool trocou = false;
        for (size_t j = 0; j + 1 < v.size() - i; j++)
            if (v[j] > v[j + 1]) { swap(v[j], v[j + 1]); trocou = true; }
        if (!trocou) break;
    }
}

void insertionSort(vector<int>& v) {
    for (size_t i = 1; i < v.size(); i++) {
        int chave = v[i];
        int j = static_cast<int>(i) - 1;
        while (j >= 0 && v[j] > chave) { v[j + 1] = v[j]; j--; }
        v[j + 1] = chave;
    }
}

void imprimir(const vector<int>& v) {
    for (int x : v) cout << x << ' ';
    cout << '\n';
}

int main() {
    vector<int> a = {64, 25, 12, 22, 11, 90};
    vector<int> b = a;

    cout << "Busca linear por 22: índice " << buscaLinear(a, 22) << '\n';

    bubbleSort(a);
    cout << "Bubble sort:    "; imprimir(a);
    insertionSort(b);
    cout << "Insertion sort: "; imprimir(b);

    cout << "Busca binária por 25: índice " << buscaBinaria(a, 25) << '\n';
    cout << "Busca binária por 99: índice " << buscaBinaria(a, 99) << '\n';

    vector<int> c = {5, 3, 8, 1};
    sort(c.begin(), c.end(), greater<int>());
    cout << "std::sort decrescente: "; imprimir(c);
    return 0;
}
