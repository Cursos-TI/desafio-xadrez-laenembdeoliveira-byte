#include <stdio.h>

// =========================================================================
// DECLARAÇÃO DAS FUNÇÕES RECURSIVAS (PROTÓTIPOS)
// =========================================================================
void moverTorreRecursivo(int casas);
void moverBispoRecursivo(int casas);
void moverRainhaRecursivo(int casas);

int main() {

    const int CASAS_TORRE = 5;
    const int CASAS_BISPO = 5;
    const int CASAS_RAINHA = 8;

    printf("--- SIMULAÇÃO DE MOVIMENTOS DE XADREZ (NÍVEL MESTRE) ---\n\n");

    
    printf("Movimento da Torre (Recursivo):\n");
    moverTorreRecursivo(CASAS_TORRE);
    printf("\n");

        printf("Movimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(CASAS_BISPO);
    printf("\n");

    printf("Movimento do Bispo (Loops Aninhados - Vertical x Horizontal):\n");
   
    for (int vertical = 1; vertical <= CASAS_BISPO; vertical++) {
       
        for (int horizontal = 1; horizontal <= CASAS_BISPO; horizontal++) {
            
            if (vertical == horizontal) {
                printf("Cima Direita\n");
                break; // Otimiza o código saindo do loop interno após encontrar a diagonal
            }
        }
    }
    printf("\n");

    printf("Movimento da Rainha (Recursivo):\n");
    moverRainhaRecursivo(CASAS_RAINHA);
    printf("\n");

        printf("Movimento do Cavalo (Loops Complexos):\n");

        for (int v = 1, passo_atual = 1; v <= 2; v++, passo_atual++) {
        
        // Se ainda não chegamos no topo do movimento vertical, apenas subimos
        if (v <= 2) {
            printf("Cima\n");
        }

                if (v < 2) {
            continue; 
        }

                for (int h = 1, confirmacao = 1; h <= 1 && confirmacao == 1; h++) {
            printf("Direita\n");
            
                break; 
        }
    }
    printf("\n");

    printf("--- FIM DA SIMULAÇÃO MESTRE ---\n");
    return 0;
}


void moverTorreRecursivo(int casas) {
    
    if (casas <= 0) {
        return;
    }
    
    printf("Direita\n");
    
    moverTorreRecursivo(casas - 1);
}

void moverBispoRecursivo(int casas) {
    // Caso Base
    if (casas <= 0) {
        return;
    }
    
    // Passo da Recursão
    printf("Cima Direita\n");
    
    // Chamada Recursiva
    moverBispoRecursivo(casas - 1);
}

void moverRainhaRecursivo(int casas) {
    
    if (casas <= 0) {
        return;
    }
    
    // Passo da Recursão
    printf("Esquerda\n");
    
    moverRainhaRecursivo(casas - 1);
}