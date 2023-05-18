#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void insertionSort(int array[], int quantidade){
    int i, j, key;

    for (i = 1; i < quantidade; i++) {
        key = array[i];

        j = i - 1;

        while (j >= 0 && array[j] > key){
            array[j + 1] = array[j];
            j -= 1;
        }

        array[j + 1] = key;
    }
}

int buscaBinaria(int array[], int quantidade, int valor){
    int inicio = 0;
    int fim = quantidade - 1;
    int meio;

    while (inicio <= fim){
        meio = (inicio + fim) / 2;

        if(valor == array[meio]){
            return meio;
        }
        else if(valor > array[meio]){
            inicio = meio + 1;
        }
        else{
            fim = meio - 1;
        }
    }

    return -1;
}


int main(){

    int resultado = -1;
    int quantidade;
    scanf("%d", &quantidade);

    int array[quantidade];

    for (int i = 0; i < quantidade; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < quantidade; i++) {
        printf("%d ", array[i]);
    }

    insertionSort(array, quantidade);

    resultado = buscaBinaria(array, quantidade, 777);

    if(resultado != -1){
        printf("S");
    }
    else{
        printf("N");
    }
    return 0;
}