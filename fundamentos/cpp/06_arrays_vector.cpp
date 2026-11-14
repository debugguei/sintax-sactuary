// Arrays e std::vector
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++) cout << arr[i] << ' ';
    cout << '\n';

    vector<int> v;
    for (int i = 1; i <= 5; i++) v.push_back(i * i);

    cout << "Tamanho: " << v.size() << '\n';
    cout << "Primeiro: " << v.front() << ", último: " << v.back() << '\n';

    int soma = accumulate(v.begin(), v.end(), 0);
    int maior = *max_element(v.begin(), v.end());
    cout << "Soma: " << soma << ", maior: " << maior << '\n';
    cout << "Média: " << static_cast<double>(soma) / v.size() << '\n';

    v.pop_back();
    v.insert(v.begin(), 0);
    for (int x : v) cout << x << ' ';
    cout << '\n';
    return 0;
}
