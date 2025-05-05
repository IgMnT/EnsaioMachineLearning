#include <stdio.h>
#include <stdlib.h>

#define MAX 100

// Lista de nomes de cores para visualização no Graphviz
const char* nomesCores[] = {
    "red", "green", "blue", "yellow", "cyan", "magenta", "orange", "pink", "gray", "brown"
};

// Função para encontrar a menor cor disponível que não é usada por vizinhos
int obterCorDisponivel(int vertice, int totalVertices, int grafo[MAX][MAX], int cor[]) {
    int corDisponivel[MAX];
    for (int i = 0; i < totalVertices; i++)
        corDisponivel[i] = 1; // Todas as cores inicialmente disponíveis

    for (int i = 0; i < totalVertices; i++) {
        if (grafo[vertice][i] && cor[i] != -1) {
            corDisponivel[cor[i]] = 0; // Marca cor do vizinho como indisponível
        }
    }

    for (int c = 0; c < totalVertices; c++) {
        if (corDisponivel[c])
            return c;
    }

    return -1; // Não deveria acontecer
}

// Função para gerar arquivo .dot para visualização com Graphviz
void gerarArquivoDot(int totalVertices, int grafo[MAX][MAX], int cor[]) {
    FILE *arquivoDot = fopen("grafo.dot", "w");
    if (!arquivoDot) {
        printf("Erro ao criar arquivo grafo.dot.\n");
        return;
    }

    fprintf(arquivoDot, "graph G {\n");

    // Escreve os nós com cores
    for (int i = 0; i < totalVertices; i++) {
        fprintf(arquivoDot, "    %d [style=filled, fillcolor=%s];\n", i, nomesCores[cor[i] % 10]);
    }

    // Escreve as arestas
    for (int i = 0; i < totalVertices; i++) {
        for (int j = i + 1; j < totalVertices; j++) {
            if (grafo[i][j]) {
                fprintf(arquivoDot, "    %d -- %d;\n", i, j);
            }
        }
    }

    fprintf(arquivoDot, "}\n");
    fclose(arquivoDot);

    printf("Arquivo 'grafo.dot' gerado com sucesso. Use Graphviz para visualizar.\n");
}

int main() {
    FILE *arquivoEntrada = fopen("grafo.txt", "r");
    if (!arquivoEntrada) {
        printf("Erro ao abrir o arquivo grafo.txt.\n");
        return 1;
    }

    int totalVertices, totalArestas;
    fscanf(arquivoEntrada, "%d %d", &totalVertices, &totalArestas);

    int grafo[MAX][MAX];
    for (int i = 0; i < totalVertices; i++)
        for (int j = 0; j < totalVertices; j++)
            fscanf(arquivoEntrada, "%d", &grafo[i][j]);

    fclose(arquivoEntrada);

    int cor[MAX];
    for (int i = 0; i < totalVertices; i++)
        cor[i] = -1;

    // Algoritmo guloso de coloração de vértices
    for (int v = 0; v < totalVertices; v++) {
        int corEscolhida = obterCorDisponivel(v, totalVertices, grafo, cor);
        cor[v] = corEscolhida;
    }

    // Mostra resultado na tela
    printf("Coloração dos vértices:\n");
    for (int i = 0; i < totalVertices; i++)
        printf("Vértice %d -> Cor %d\n", i, cor[i]);

    // Salva em cores.txt
    FILE *arquivoSaida = fopen("cores.txt", "w");
    if (!arquivoSaida) {
        printf("Erro ao criar o arquivo cores.txt.\n");
        return 1;
    }

    for (int i = 0; i < totalVertices; i++)
        fprintf(arquivoSaida, "Vértice %d -> Cor %d\n", i, cor[i]);

    fclose(arquivoSaida);
    printf("Arquivo 'cores.txt' gerado com sucesso.\n");

    // Gera arquivo .dot para visualização gráfica
    gerarArquivoDot(totalVertices, grafo, cor);

    return 0;
}
