
#include <stdio.h>
#include <stdbool.h>

#define TAMANHO_TABULEIRO 10

// Função para inicializar o tabuleiro com água (0)
void inicializarTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0; // 0 representa água
        }
    }
}

// Função para posicionar um navio horizontalmente
bool posicionarNavioHorizontal(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], 
                              int x, int y, int tamanho) {
    // Verifica se o navio cabe no tabuleiro
    if (y + tamanho > TAMANHO_TABULEIRO) {
        return false;
    }
    
    // Verifica se a posição está livre
    for (int i = 0; i < tamanho; i++) {
        if (tabuleiro[x][y + i] != 0) {
            return false;
        }
    }
    
    // Posiciona o navio
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[x][y + i] = 1; // 1 representa parte de um navio
    }
    
    return true;
}

// Função para posicionar um navio verticalmente
bool posicionarNavioVertical(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], 
                            int x, int y, int tamanho) {
    // Verifica se o navio cabe no tabuleiro
    if (x + tamanho > TAMANHO_TABULEIRO) {
        return false;
    }
    
    // Verifica se a posição está livre
    for (int i = 0; i < tamanho; i++) {
        if (tabuleiro[x + i][y] != 0) {
            return false;
        }
    }
    
    // Posiciona o navio
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[x + i][y] = 1; // 1 representa parte de um navio
    }
    
    return true;
}

// Função para exibir as coordenadas dos navios
void exibirCoordenadasNavios(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    printf("Coordenadas dos Navios:\n");
    printf("-----------------------\n");
    
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            if (tabuleiro[i][j] == 1) {
                printf("Navio na posição: (%d, %d)\n", i, j);
            }
        }
    }
}

// Função para exibir o tabuleiro (opcional, para visualização)
void exibirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    printf("\nTabuleiro:\n");
    printf("  0 1 2 3 4 5 6 7 8 9\n");
    
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        printf("%d ", i);
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    
    // Inicializa o tabuleiro
    inicializarTabuleiro(tabuleiro);
    
    // Posiciona os navios (valores podem ser alterados conforme necessário)
    // Navio horizontal: tamanho 3, posição (2,3)
    if (!posicionarNavioHorizontal(tabuleiro, 2, 3, 3)) {
        printf("Erro ao posicionar navio horizontal!\n");
        return 1;
    }
    
    // Navio vertical: tamanho 4, posição (5,6)
    if (!posicionarNavioVertical(tabuleiro, 5, 6, 4)) {
        printf("Erro ao posicionar navio vertical!\n");
        return 1;
    }
    
    // Exibe as coordenadas dos navios
    exibirCoordenadasNavios(tabuleiro);
    
    // Exibe o tabuleiro (opcional)
    exibirTabuleiro(tabuleiro);
    
    return 0;
}