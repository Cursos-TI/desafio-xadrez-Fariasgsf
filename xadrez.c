#include <stdio.h>

int main() {
    // Torre: mover 5 casas para a direita (usando 'for')
    printf("Jogo de Xadrez - Movimento das Peças:\n");
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Bispo: mover 5 casas para cima e direita (usando 'while')
    printf("Movimento do Bispo:\n");
    int i = 0;
    while (i < 5) {
        printf("Cima, Direita\n");
        i++;
    }
    printf("\n");

    // Rainha: mover 8 casas para a esquerda (usando 'do-while')
    printf("Movimento da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < 8);
    printf("\n");


    // Cavalo: move duas casas em uma direção (horizontal ou vertical) e depois uma casa perpendicularmente
    // Exemplo: mover 2 casas para cima e 1 casa para a direita (usando 'for') USANDO FOR ANINHAD

    printf("Movimento do Cavalo:\n");
    for(int i = 0; i < 2; i++) 
    {
    printf("Baixo\n");
    }
    int l = 0;
    while ( l < 1 )
    {
    printf("Esquerda\n");
    l++;
    }
        
     return 0;
}

