// Ponteiros, referências e memória dinâmica
#include <iostream>
#include <memory>
using namespace std;

void incrementaRef(int& x) { x++; }
void incrementaPtr(int* x) { if (x) (*x)++; }

int main() {
    int a = 10;
    int* p = &a;
    int& r = a;

    cout << "a=" << a << " *p=" << *p << " r=" << r << '\n';
    cout << "Endereço de a: " << p << '\n';

    *p = 20;
    cout << "Após *p = 20, a=" << a << '\n';

    incrementaRef(a);
    incrementaPtr(&a);
    cout << "Após duas funções, a=" << a << '\n';

    int* dyn = new int(42);
    cout << "Alocado: " << *dyn << '\n';
    delete dyn;

    int* arr = new int[3]{1, 2, 3};
    for (int i = 0; i < 3; i++) cout << *(arr + i) << ' ';
    cout << '\n';
    delete[] arr;

    auto u = make_unique<int>(99);
    cout << "unique_ptr: " << *u << " (libera sozinho)\n";
    return 0;
}
