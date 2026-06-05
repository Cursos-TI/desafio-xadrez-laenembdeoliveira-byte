#include <stdio.h>

int main() {
    
    const int CASAS_TORRE = 5;
    const int CASAS_BISPO = 5;
    const int CASAS_RAINHA = 8;
    
    const int CAVALO_BAIXO = 2;
    const int CAVALO_ESQUERDA = 1;
       
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= CASAS_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n");

    printf("Movimento do Bispo:\n");
    int contadorBispo = 1;
    while (contadorBispo <= CASAS_BISPO) {
        printf("Cima Direita\n");
        contadorBispo++;
    }
    printf("\n");
    
    printf("Movimento da Rainha:\n");
    int contadorRainha = 1;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= CASAS_RAINHA);
    printf("\n");

        printf("Movimento do Cavalo:\n");

        for (int vertical = 1; vertical <= CAVALO_BAIXO; vertical++) {
        printf("Baixo\n");

                if (vertical == CAVALO_BAIXO) {
            int horizontal = 1; 

                      while (horizontal <= CAVALO_ESQUERDA) {
                printf("Esquerda\n");
                horizontal++; 
                        }
        }
    }
    printf("\n");

    printf("--- FIM DA SIMULAÇÃO ---\n");
    return 0;
}