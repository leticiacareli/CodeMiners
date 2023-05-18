//Uma string: "Ideal" se a temperatura estiver no intervalo ideal, "Baixa" se estiver abaixo de 18 graus e "Alta" se estiver acima de 24 graus.
#include <stdio.h>

int main() {
    int temperatura;
    scanf("%d", &temperatura);

    // TODO: Crie as condições de acordo com as saídas deste desafio.
    if(temperatura < 18){
        printf("Baixa");
    }
    else if(temperatura > 24){
        printf("Alta");
    }
    else{
        printf("Ideal");
    }

    return 0;
}
