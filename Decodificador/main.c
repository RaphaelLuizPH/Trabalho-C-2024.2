#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "remove.h.c"

void decodificar(char *mensagem, int b) {
    int x = 1;
    for (int i = 0; mensagem[i] != '\0'; i += 2) {
        char hex[3] = {mensagem[i], mensagem[i + 1], '\0'};
        int decimal = (int)strtol(hex, NULL, 16);

        if (func_val(x, b) != 0 && decimal != 0) {
            /// Condiçóes para verificar se o caractere é válido
            if (decimal > 64 && decimal < 91) {
                printf("%c", decimal);
                //printf(" (%d)", decimal);
            } else if (decimal > 128 && decimal < 155) {
                printf("%c", decimal);
                //printf(" (%d)", decimal);
            } else if (decimal > 96 && decimal < 123 || decimal == 198) {
                printf("%c", decimal);
                //printf(" (%d)", decimal);
            } else if (decimal == 32) {
                printf("%c", decimal);
            }
        }
        x++;
    }
    printf("\n");
}

int main() {



    int casos, b;
    char mensagem[101];


    scanf("%d", &casos);
    for (int i = 0; i <= casos; i++) {
        scanf("%d", &b);
        scanf("%s", mensagem);
        decodificar(mensagem, b);
    }

    return 0;
}
