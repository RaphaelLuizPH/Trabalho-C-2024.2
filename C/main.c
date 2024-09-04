#include <stdio.h>
#include <stdlib.h>
#include "remove.h.c"

void decode_message(int b, char *hex_message) {
    int i = 0;
    while (hex_message[i] != '\0' && hex_message[i] != '0' && hex_message[i + 1] != '0') {
        int x = i / 2 + 1;
        int val = func_val(x, b);
        if (val != 0) {
            char hex[3] = {hex_message[i], hex_message[i + 1], '\0'};
            int decimal = (int)strtol(hex, NULL, 16);
            printf("%c", decimal);
        }
        i += 2;
    }
    printf("\n");
}

int main() {
    int num_cases, b;

    scanf("%d", &num_cases);
    for (int i = 0; i < num_cases; i++) {
        char hex_message[101];
        scanf("%d %s", &b, hex_message);
        decode_message(b, hex_message);
    }

    return 0;
}
