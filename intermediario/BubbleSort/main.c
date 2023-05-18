#include <stdio.h>
#include<stdlib.h>

void trocar(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int *array, int quantidade){
    // TODO: Implemente o algoritmo "Bubble Sort".
    // Dica: O método "trocar" pode ser útil ;)
    if(quantidade < 1){
        return;
    }
    else{
        for (int i = 0; i < quantidade; i++) {
            if(array[i] > array[i + 1]){
                trocar(&array[i], &array[i + 1]);
            }
        }
    }

    bubbleSort(array, quantidade - 1);
}

int main() {
    int tam, i, *v;

    scanf("%d", &tam);

    v = (int*) malloc(tam * sizeof (int));

    for ( i = 0; i < tam; i++) {
        scanf("%d ", &v[i]);
    }

    bubbleSort(v, tam - 1);

    for (int i = 0; i < tam; i++) {
        printf("%d", v[i]);
    }
    return 0;
}
