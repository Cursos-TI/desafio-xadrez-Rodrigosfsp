#include <stdio.h>

int main() {
    // Movimento da torre: 5 casas para a direita

    int torre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= torre; i++) {
        printf("Direita\n");
    }

    // Movimento do bispo: 5 casas na diagonal para cima e cireita

    int bispo = 5;
    int b = 1;
    printf("\nMovimento do Bispo:\n");
    while (b <= bispo) {
        printf("Cima - Direita\n");
        b++;
    }

    // Movimento da rainha: 8 casas para a esquerda

    int rainha = 8;
    int r = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        r++;
    } while (r <= rainha);

    // Movimento do cavalo em L

    int cavalo = 1;

    printf("\nMovimento do Cavalo:\n");

        while (cavalo--)
        {
            for (int i = 0; i < 2; i++)
            {
                printf("Baixo\n");
            }
            
                printf("Esquerda\n");
        }
        






    
    return 0;
}


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.