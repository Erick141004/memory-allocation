# Memory Allocation

Este projeto simula um gerenciamento de memória simplificado, onde a memória é gerida manualmente e usada para armazenar uma lista encadeada de valores. O sistema realiza alocação, inserção, remoção e impressão da lista, além de gerenciamento de memória com alocação e liberação customizadas.

## Estrutura do Projeto

- `lista.h` e `lista.c`: Implementação da estrutura de lista encadeada. Funções como `criar_lista`, `inserir_no`, `remover_no`, ` buscar_no`, `imprimir_lista`, e `deletar_lista` são utilizadas para manipulação da lista.
- `memoria.h` e `memoria.c`: Gerenciamento de memória simulado com funções de alocação (`aloca`), liberação (`libera`) e verificação de espaços livres (`pode_alocar`). A memória é controlada por um array estático.
- `main.c`: Arquivo principal que testa a alocação de memória, inserção de valores na lista e imprime o estado da memória.

## Como Rodar

1. Clone o repositório:
```
git clone https://github.com/Erick141004/memory-allocation.git
```
2. Compile o código:
```
gcc -o main main.c lista.c memoria.c  
```
3. Execute o programa:
```
./main
```

## Explicação do Código

- **Alocação e Liberação de Memória:** A memória é gerida manualmente através do array `memoria[]`, com um tamanho fixo de 8192 bytes (definido em `MEMO_LEN`). As funções `aloca` e `libera` simulam o comportamento de alocadores de memória, com a verificação de espaço livre.
- **Lista Encadeada:** A estrutura `LISTA` é usada para criar e manipular uma lista encadeada. Funções de inserção, remoção e busca são implementadas recursivamente, permitindo a manipulação de elementos dentro da lista.
- **Impressão do Estado da Memória:** A função `imprime_memoria` exibe a ocupação da memória, mostrando os endereços e tamanhos dos blocos alocados.

## Conclusão

Este projeto foi desenvolvido como parte da disciplina de Sistemas Operacionais durante o sexto semestre do curso de Ciência da Computação. Ele proporciona uma compreensão prática sobre gerenciamento de memória e estruturas de dados, conectando teoria e prática de forma aplicada. A experiência ajudou a consolidar conceitos de alocação de recursos, manipulação de listas e implementação de algoritmos em C, sendo uma base importante para estudos futuros na área de sistemas computacionais.
