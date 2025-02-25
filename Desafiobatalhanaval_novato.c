# include <stdio.h>


#define tamanho_tabuleiro 10
#define tamanho_navio 3

void exibirtabuleiro( int tabuleiro[tamanho_tabuleiro][tamanho_tabuleiro]){
    for (int i=0; i < tamanho_tabuleiro;i++){
        for (int j=0; j < tamanho_tabuleiro;j++){
            printf("%d", tabuleiro[i][j]);
        }
        printf ("\n");
    } 

}
int main() {
    // Inicializando o tabuleiro com 0s (águas)
    int tabuleiro[tamanho_tabuleiro][tamanho_tabuleiro] = {0};

    // Posicionando o primeiro navio horizontal (tamanho 3)
    int navioHorizontalX = 2;  // Coordenada X inicial
    int navioHorizontalY = 3;  // Coordenada Y inicial

    // Posiciona o navio horizontal (3 unidades)
    for (int i = 0; i < tamanho_navio; i++) {
        tabuleiro[navioHorizontalX][navioHorizontalY + i] = 3;
    }

    // Posicionando o segundo navio vertical (tamanho 3)
    int navioVerticalX = 6;  // Coordenada X inicial
    int navioVerticalY = 5;  // Coordenada Y inicial

    // Posiciona o navio vertical (3 unidades)
    for (int i = 0; i < tamanho_navio; i++) {
        tabuleiro[navioVerticalX + i][navioVerticalY] = 3;
    }

    // Exibe o tabuleiro
    printf("Tabuleiro do Batalha Naval:\n");
    exibirtabuleiro(tabuleiro);

    return 0;
}
