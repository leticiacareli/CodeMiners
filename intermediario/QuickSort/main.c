#include <stdio.h>
#include <stdlib.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int particao(int array[], int inicio, int fim){
    int pivo = array[fim];
    int i = (inicio - 1);
    for(int j = inicio; j <= fim - 1; j++){
        if(array[j] < pivo){
            i++;
            trocar(&array[i], &array[j]);
        }
    }

    trocar(&array[i + 1], &array[fim]);
    return (i + 1);
}

void quickSort(int array[], int inicio, int fim){
    // TODO: Implemente o algoritmo "Quick Sort" para ordenação.
    // Dica: O método "trocar" pode ser útil ;)
    if(inicio < fim){
        int pi = particao(array, inicio, fim);

        quickSort(array, inicio, pi - 1);
        quickSort(array, pi + 1, fim);
    }
}

int main() {
    // Lê os nossos dados de entrada:
    int quantidade;
    scanf("%d", &quantidade);
    int joias[quantidade];
    for (int i = 0; i < quantidade; i++) {
        scanf("%d", &joias[i]);
    }

//    int inicio = 0;
//    int fim = quantidade - 1;

    quantidade = sizeof (joias) / sizeof (joias[0]);
    // Executa o algoritmo "quickSort" para ordenar as "joias".
    quickSort(joias, 0, quantidade - 1);

    // Imprime as "joias" ordenadas.
    for (int i = 0; i < quantidade; i++) {
        printf("%d ", joias[i]);
    }

    return 0;
}