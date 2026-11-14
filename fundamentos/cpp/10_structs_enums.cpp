// struct, enum class e vetor de structs
#include <iostream>
#include <string>
#include <vector>
using namespace std;

enum class Nivel { Iniciante, Intermediario, Avancado };

struct Aluno {
    string nome;
    int idade;
    double nota;
    Nivel nivel;
};

string nomeNivel(Nivel n) {
    switch (n) {
        case Nivel::Iniciante:     return "Iniciante";
        case Nivel::Intermediario: return "Intermediário";
        case Nivel::Avancado:      return "Avançado";
    }
    return "?";
}

void imprimir(const Aluno& a) {
    cout << a.nome << " (" << a.idade << " anos) - nota "
         << a.nota << " - " << nomeNivel(a.nivel) << '\n';
}

int main() {
    vector<Aluno> turma = {
        {"Ana", 20, 8.5, Nivel::Intermediario},
        {"Bruno", 22, 6.0, Nivel::Iniciante},
        {"Carla", 21, 9.7, Nivel::Avancado},
    };

    double soma = 0;
    for (const auto& a : turma) {
        imprimir(a);
        soma += a.nota;
    }
    cout << "Média da turma: " << soma / turma.size() << '\n';
    return 0;
}
