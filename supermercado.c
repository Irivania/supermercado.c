#include <stdio.h>
#include <stdbool.h>

int main() {
    // 1. Estruturação dos dados: vetor de 10 posições com preços de supermercado
    int n = 10;
    float precosOriginais[10] = {8.50, 4.25, 32.90, 15.75, 2.80, 45.00, 12.30, 6.99, 89.90, 19.50};
    
    // Vetores auxiliares para preservar a ordem original em cada processamento
    float precosCrescente[10];
    float precosDecrescente[10];

    for (int i = 0; i < n; i++) {
        precosCrescente[i] = precosOriginais[i];
        precosDecrescente[i] = precosOriginais[i];
    }

    // Cabecalho visual formatado
    printf("=================================================================\n");
    printf("       EXPERIENCIA PRATICA IV - ALGORITMOS E ORDENACAO\n");
    printf("       Cenario: Precos de Produtos de Supermercado\n");
    printf("=================================================================\n\n");

    // 2. Exibição dos Dados Originais (Não Ordenados)
    printf("-> 1. Dados Originais (Brutos):\n");
    for (int i = 0; i < n; i++) {
        printf("   R$ %.2f", precosOriginais[i]);
        if (i < n - 1) printf(", ");
    }
    printf("\n\n");

    // 3. Processamento e Exibição: Ordem Crescente (Bubble Sort)
    for (int i = 0; i < n - 1; i++) {
        bool trocou = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (precosCrescente[j] > precosCrescente[j + 1]) {
                float temp = precosCrescente[j];
                precosCrescente[j] = precosCrescente[j + 1];
                precosCrescente[j + 1] = temp;
                trocou = true;
            }
        }
        if (!trocou) break;
    }

    printf("-> 2. Precos em Ordem Crescente (Do menor para o maior):\n");
    for (int i = 0; i < n; i++) {
        printf("   R$ %.2f", precosCrescente[i]);
        if (i < n - 1) printf(", ");
    }
    printf("\n\n");

    // 4. Processamento e Exibição: Ordem Decrescente (Bubble Sort Invertido)
    for (int i = 0; i < n - 1; i++) {
        bool trocou = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (precosDecrescente[j] < precosDecrescente[j + 1]) { // Condicao invertida (<)
                float temp = precosDecrescente[j];
                precosDecrescente[j] = precosDecrescente[j + 1];
                precosDecrescente[j + 1] = temp;
                trocou = true;
            }
        }
        if (!trocou) break;
    }

    printf("-> 3. Precos em Ordem Decrescente (Do maior para o menor):\n");
    for (int i = 0; i < n; i++) {
        printf("   R$ %.2f", precosDecrescente[i]);
        if (i < n - 1) printf(", ");
    }
    printf("\n\n");
    printf("=================================================================\n");

    return 0;
}