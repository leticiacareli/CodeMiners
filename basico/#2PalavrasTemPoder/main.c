#include <stdio.h>
#include <string.h>

// Função que recebe uma string e inverte a ordem das letras.
void inverter(char palavra[]) {
    // TODO: Implemente a lógica para inverter a "palavra".
    size_t tamanho = strlen(palavra);

    for (int i = 0; i < tamanho / 2; i++) {
        char aux = palavra[i];
        palavra[i] = palavra[tamanho - i - 1];
        palavra[tamanho - i - 1] = aux;
    }
}

int main() {
    char palavra[100];


    // Lê a palavra a ser invertida do usuário.
    scanf("%s", palavra);

    // Chama a função que inverte a palavra.
    inverter(palavra);

    // Imprime a palavra invertida na tela.
    printf("%s", palavra);
    return 0;
}
