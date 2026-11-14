// Strings: operações comuns
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

bool ehPalindromo(string s) {
    string limpa;
    for (char c : s)
        if (isalnum(static_cast<unsigned char>(c)))
            limpa += tolower(static_cast<unsigned char>(c));
    string rev(limpa.rbegin(), limpa.rend());
    return limpa == rev;
}

int main() {
    string s = "Syntax Sanctuary";

    cout << "Tamanho: " << s.length() << '\n';
    cout << "Primeira palavra: " << s.substr(0, 6) << '\n';
    cout << "Posição de 'Sanc': " << s.find("Sanc") << '\n';

    string up = s;
    transform(up.begin(), up.end(), up.begin(), ::toupper);
    cout << "Maiúsculas: " << up << '\n';

    int vogais = 0;
    for (char c : s) if (string("aeiouAEIOU").find(c) != string::npos) vogais++;
    cout << "Vogais: " << vogais << '\n';

    cout << "'Arara' é palíndromo? " << (ehPalindromo("Arara") ? "sim" : "não") << '\n';
    cout << "'Socorram-me' é palíndromo? " << (ehPalindromo("Socorram-me") ? "sim" : "não") << '\n';
    return 0;
}
