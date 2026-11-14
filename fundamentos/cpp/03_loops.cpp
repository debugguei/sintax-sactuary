// Loops: for, while, do-while e range-based for
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Tabuada de: ";
    cin >> n;
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << '\n';
    }

    int x, soma = 0;
    cout << "\nDigite números (0 para parar):\n";
    while (cin >> x && x != 0) {
        soma += x;
    }
    cout << "Soma: " << soma << '\n';

    int op;
    do {
        cout << "\n1) Oi  2) Tchau  0) Sair: ";
        cin >> op;
        if (op == 1) cout << "Oi!\n";
        else if (op == 2) cout << "Tchau!\n";
    } while (op != 0);

    vector<int> v = {3, 1, 4, 1, 5};
    for (int val : v) cout << val << ' ';
    cout << '\n';
    return 0;
}
