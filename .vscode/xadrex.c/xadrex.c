#include <stdio.h>

int main() {
  
    
   
    printf("Movimento da Torre:\n");    //Mostrar qual Peça
   
    for (int i = 1; i <= 5; i++) {      // Simulação do movimento da Torre " 5 casas a direita"
        printf("Direita\n");            // Mostrar direçao
    }

    // Simulação do movimento do Bispo " 5 casas na diagonal pra cima e direita"
   
    printf("\nMovimento do Bispo:\n");  //Mostrar qual Peça
   
    int casa_bispo = 1;
   
    while (casa_bispo <= 5) {
        printf("Cima, Direita\n");     // Mostrar direçao
    
        casa_bispo++;
    }

   
    // Simulação do movimento da Rainha " 8 casas a esquerda"
   
    printf("\nMovimento da Rainha:\n"); //Mostrar qual Peça
   
    int casa_rainha = 1;
   
    do {
        printf("Esquerda\n");          // Mostrar direçao
    
        casa_rainha++;
    } while (casa_rainha <= 8);

    return 0;
}