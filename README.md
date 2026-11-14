<div align="center">

<img src="https://i.pinimg.com/736x/a9/a8/53/a9a8533cd3f519ab8928ef5696f16f9a.jpg" alt="Syntax Sanctuary" width="320">

# Syntax Sanctuary

**Seu santuário de código: exercícios, desafios e mini projetos para aprender praticando.**

![C++](https://img.shields.io/badge/C%2B%2B-17-00599C?logo=cplusplus&logoColor=white)
![Python](https://img.shields.io/badge/Python-3.x-3776AB?logo=python&logoColor=white)
![Java](https://img.shields.io/badge/Java-17%2B-ED8B00?logo=openjdk&logoColor=white)
![Licença](https://img.shields.io/badge/licen%C3%A7a-MIT-green)
![PRs](https://img.shields.io/badge/PRs-bem--vindos-brightgreen)

[Central de estudos (Notion)](https://liberating-sea-037.notion.site) · [Como contribuir](CONTRIBUTING.md) · [Licença](LICENSE)

</div>

---

## Sobre

Um repositório aberto para iniciantes e intermediários que querem evoluir escrevendo código de verdade. Cada tópico traz exemplos comentados, e os desafios têm testes automáticos: você implementa, roda e vê na hora se passou.

Ele é o lado prático de uma central de estudos no Notion, que organiza teoria, links e anotações por área. Aqui ficam os códigos; lá, o conteúdo de apoio.

## Objetivo

- Cobrir do básico a tópicos avançados de computação, de forma progressiva.
- Mostrar o mesmo conceito em várias linguagens, lado a lado.
- Treinar com desafios que se corrigem sozinhos.
- Conectar programação com dados, IA, sistemas e cloud.

## Estrutura

Legenda: ✅ pronto · 🚧 em desenvolvimento · ⏳ planejado

| Pasta | Conteúdo | Status |
|---|---|:---:|
| [`fundamentos/`](fundamentos) | C++, Java, Python, C, JavaScript, Assembly | ✅ C++ · 🚧 Java, Python · ⏳ demais |
| [`fundamentos/desafios/`](fundamentos/desafios) | Desafios com testes automáticos e gabarito | ✅ C++ |
| [`fundamentos/extras/`](fundamentos/extras) | Desafios estilo entrevista | ✅ C++ |
| [`backend/`](backend) | Node.js, C#, Go, Rust | 🚧 |
| [`frontend/`](frontend) | A definir | 🚧 |
| [`mobile/`](mobile) | A definir | 🚧 |
| [`data-ia/`](data-ia) | Python para dados, R, SQL, Scala, Julia, MATLAB, estatística, ML, Deep Learning | 🚧 |
| [`engenharia/`](engenharia) | Estruturas de dados, arquitetura de computadores, sistemas operacionais | 🚧 |
| [`dev-cloud/`](dev-cloud) | Git e GitHub, Docker e DevOps, Cloud | 🚧 |
| [`poo/`](poo) | Classes, herança, polimorfismo | 🚧 |
| [`mini-projetos/`](mini-projetos) | Pequenos sistemas completos | 🚧 |

```
sintax-sactuary/
├── fundamentos/
│   ├── cpp/ java/ python/ c/ javascript/ assembly/
│   ├── desafios/cpp/      # + gabarito/
│   └── extras/cpp/        # + gabarito/
├── backend/               # nodejs, csharp, go, rust
├── frontend/
├── mobile/
├── data-ia/               # python-dados, r, sql, scala, julia, matlab,
│                          # estatistica, machine-learning, deep-learning,
│                          # ferramentas-dados
├── engenharia/            # estruturas-dados, arquitetura-computadores,
│                          # sistemas-operacionais
├── dev-cloud/             # git-github, docker-devops, cloud
├── poo/
└── mini-projetos/
```

Cada pasta em desenvolvimento tem um `README.md` próprio que será preenchido conforme o conteúdo chegar.

## Exemplos de fundamentos (C++)

| Arquivo | Tópico |
|---|---|
| `conversor_temperatura.cpp` | Entrada de dados, condicionais e funções |
| `01_entrada_saida.cpp` | `cin`, `cout`, `getline` |
| `02_condicionais.cpp` | `if`, `else if`, `switch` |
| `03_loops.cpp` | `for`, `while`, `do-while` |
| `04_funcoes.cpp` | Parâmetros, referência, sobrecarga |
| `05_tipos_operadores.cpp` | Tipos, operadores, conversões |
| `06_arrays_vector.cpp` | Arrays e `std::vector` |
| `07_strings.cpp` | Operações com `std::string` |
| `08_matrizes.cpp` | Matrizes, transposta, multiplicação |
| `09_ponteiros_referencias.cpp` | Ponteiros, `new`/`delete`, `unique_ptr` |
| `10_structs_enums.cpp` | `struct` e `enum class` |
| `11_recursao.cpp` | Fibonacci, MDC, Torre de Hanói |
| `12_busca_ordenacao.cpp` | Busca linear/binária, bubble e insertion sort |
| `13_validacao_entrada.cpp` | Validação de entrada e exceções |
| `14_arquivos.cpp` | Leitura e escrita com `fstream` |

## Desafios

| Pasta | Arquivos | Temas |
|---|---|---|
| `desafios/cpp/` | `desafio_01` a `desafio_04` | Entrada/saída, condicionais, loops, funções |
| `extras/cpp/` | `extra_01` a `extra_04` | Strings, matemática, vetores, lógica (cifra de César, números romanos, parênteses balanceados, matriz espiral) |

## Como usar

```bash
git clone https://github.com/debugguei/sintax-sactuary.git
cd sintax-sactuary/fundamentos/cpp

g++ -std=c++17 -Wall 01_entrada_saida.cpp -o app
./app            # no Windows: app.exe
```

### Como fazer os desafios

1. Abra um arquivo em `fundamentos/desafios/cpp/` ou `fundamentos/extras/cpp/`.
2. Leia o enunciado no comentário e implemente as funções marcadas com `// TODO`.
3. Compile e rode: cada teste mostra `[OK]` ou `[FALHOU]`.
4. Só abra a pasta `gabarito/` depois de tentar.

## Como contribuir

Contribuições são bem-vindas! Veja o [CONTRIBUTING.md](CONTRIBUTING.md) para enviar novos exemplos, desafios ou correções.

1. Faça um fork do projeto.
2. Crie uma branch: `git checkout -b feature/meu-exemplo`.
3. Faça o commit: `git commit -m "Add exemplo de X"`.
4. Envie: `git push origin feature/meu-exemplo`.
5. Abra um Pull Request.

## Licença

Distribuído sob a licença MIT. Veja o arquivo [LICENSE](LICENSE) para mais detalhes.

---

<div align="center">

⭐ Se este repositório te ajudou a aprender, deixe uma estrela!

</div>
