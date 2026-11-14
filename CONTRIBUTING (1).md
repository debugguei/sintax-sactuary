# Como contribuir

Obrigado por querer ajudar! Este repositório é para quem está aprendendo, então clareza vale mais do que código "esperto".

## Tipos de contribuição

- Novos exemplos em Python, Java ou C++.
- Novos desafios com testes automáticos.
- Correção de bugs, erros de digitação ou explicações confusas.
- Tradução ou melhoria dos comentários e do README.

## Passo a passo

1. Faça um fork do repositório.
2. Clone o seu fork e crie uma branch descritiva:
   ```bash
   git checkout -b feature/exemplo-pilhas-cpp
   ```
3. Faça as alterações e teste localmente.
4. Faça o commit com uma mensagem clara (veja abaixo).
5. Envie a branch e abra um Pull Request explicando o que mudou.

## Onde colocar cada coisa

```
<tema>/
├── cpp/
├── java/
└── python/
```

- Cada tema (`fundamentos/`, `estruturas_dados/`, `poo/`, `mini-projetos/`) tem uma subpasta por linguagem.
- Desafios ficam em `desafios/<linguagem>/` e os mais difíceis em `extras/<linguagem>/`.
- Todo desafio precisa de uma solução na pasta `gabarito/`.

## Padrões de código

**Geral**
- Um conceito por arquivo, com um comentário curto no topo dizendo o que ele ensina.
- Nomes de arquivos em `snake_case` para Python e C++, e em `PascalCase` para classes Java.
- Mantenha os exemplos curtos e legíveis. Evite truques que um iniciante não entenderia.
- Todo exemplo deve compilar e rodar sem erros ou avisos.

**C++**
- Padrão C++17.
- Compile com `g++ -std=c++17 -Wall -Wextra arquivo.cpp -o app`.

**Python**
- Python 3, seguindo a PEP 8.

**Java**
- Java 17 ou superior.

## Regras para desafios

- O enunciado fica em comentário no topo da função, com exemplos de entrada e saída.
- Os testes devem funcionar sozinhos, sem pedir entrada do usuário.
- A versão sem resolver deve compilar e falhar nos testes. O gabarito deve passar em todos.
- Indique o nível: fácil, médio ou difícil.

## Mensagens de commit

Use o verbo no imperativo e seja específico:

- `Add C++ example for stacks`
- `Fix off-by-one in binary search challenge`
- `Update README progress table`

## Checklist do Pull Request

- [ ] O código compila e roda sem avisos.
- [ ] Os testes passam (no caso de desafios e gabaritos).
- [ ] O arquivo está na pasta e com o nome corretos.
- [ ] Há um comentário no topo explicando o objetivo.
- [ ] O README foi atualizado, se necessário.

## Comportamento esperado

Seja respeitoso e paciente. Todo mundo aqui está aprendendo, e feedback deve ser construtivo e gentil. Comportamento ofensivo ou discriminatório não será tolerado.

## Dúvidas

Abra uma Issue descrevendo sua ideia ou dúvida antes de começar algo grande.
