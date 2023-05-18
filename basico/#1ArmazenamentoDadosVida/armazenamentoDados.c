//
// Created by letic on 03/05/2023.
//
#include <stdio.h>

int main() {
    int capacidadeAtual, aumentoPercentual, novaCapacidade;

    printf("Capacidade = ");
    scanf("%d", &capacidadeAtual);

    printf("Aumento = ");
    scanf("%d", &aumentoPercentual);

    // Lê as entradas do usuário
    //scanf("%d %d", &capacidadeAtual, &aumentoPercentual);

    //TODO: Declare e calcule a nova capacidade do disco de Mithril.
    novaCapacidade = (capacidadeAtual * aumentoPercentual) / 100;
    //TODO: Imprima a nova capacidade.
    printf("%d", novaCapacidade + capacidadeAtual);
    return 0;
}
