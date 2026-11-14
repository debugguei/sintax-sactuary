// Recursão clássica
#include <iostream>
#include <string>
using namespace std;

long long fib(int n) {
    if (n < 2) return n;
    return fib(n - 1) + fib(n - 2);
}

long long fibMemo(int n, long long memo[]) {
    if (n < 2) return n;
    if (memo[n] != -1) return memo[n];
    return memo[n] = fibMemo(n - 1, memo) + fibMemo(n - 2, memo);
}

int mdc(int a, int b) { return b == 0 ? a : mdc(b, a % b); }

long long potencia(long long base, int exp) {
    if (exp == 0) return 1;
    long long metade = potencia(base, exp / 2);
    return exp % 2 == 0 ? metade * metade : metade * metade * base;
}

void hanoi(int n, char de, char para, char aux) {
    if (n == 0) return;
    hanoi(n - 1, de, aux, para);
    cout << "Move disco " << n << " de " << de << " para " << para << '\n';
    hanoi(n - 1, aux, para, de);
}

int main() {
    cout << "fib(10) = " << fib(10) << '\n';

    long long memo[91];
    for (auto& m : memo) m = -1;
    cout << "fib(90) com memo = " << fibMemo(90, memo) << '\n';

    cout << "mdc(48, 18) = " << mdc(48, 18) << '\n';
    cout << "2^30 = " << potencia(2, 30) << '\n';

    cout << "\nTorre de Hanói com 3 discos:\n";
    hanoi(3, 'A', 'C', 'B');
    return 0;
}
