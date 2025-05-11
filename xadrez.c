#include <stdio.h>

//Número de movimento igual o número de casas escolhido
void movertorre(int casas){
    if(casas > 0){
        movertorre(casas - 1);
        printf("Direita \n");
        
    }}

    //Número de movimento igual o número de casas escolhido
void moverrainha(int casas){
    if(casas > 0){
         moverrainha(casas - 1);
         printf("Esquerda \n");
            
        }}
    
        //Número de movimento igual o número de casas escolhido
void moverbisporecursivo(int casas) {
    if (casas > 0) {
        moverbisporecursivo(casas - 1);
         printf("Cima - Direita\n");
            }}

            //Para cada movimento para cima i 1 movimento de j para o lado
void moverbispo(int movimentovertical, int movimentohorizontal) {
    for (int i = 0; i < movimentovertical; i++) {
        for (int j = 0; j < movimentohorizontal; j++) {
         printf("Diagonal: Cima - Direita\n");
                    }}}
            
void movercavalo(int movimentos) {
    for (int i = 0; i < movimentos; i++) {
    // Primeira parte do movimento: 2 casas para baixo
        for (int j = 0; j < 2; j++) {
         printf("Baixo\n");
}                     
    // Segunda parte do movimento: 1 casa para a esquerda
         printf("Esquerda\n");
}}                   
                    

int main () {

    int torre = 5; // Número de casas

        printf("\nMovimento da torre...\n");
        movertorre(torre);
        
        int rainha = 8; // Número de casas

        printf("\nMovimento da rainha...\n");
        moverrainha(rainha);
    
        printf("\nMovimento do Bispo (recursivo)...\n");
        moverbisporecursivo(5); // Número de casas
        
        printf("\nMovimento do Bispo (com Loops Aninhados)...\n");
        moverbispo(5, 1); //Número de casas vertical, Número de casas horizontal
        
        int movimentoscavalo = 1; // Número de casas

        printf("\nMovimento do Cavalo (com Loops Aninhados):\n");
        movercavalo(movimentoscavalo);




    return 0;
}