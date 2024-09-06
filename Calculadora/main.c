#include <stdio.h>
#include <locale.h>



    int main() {

        setlocale(LC_ALL, "portuguese");

        float N1, N2, PPD, EU, N3, notaFinal;
        int flagEU, flagN3;

        printf("Digite as notas N1, N2 e PPD (separadas por espaço): ");
        scanf("%f %f %f", &N1, &N2, &PPD);

        if (N1 < 0 || N1 > 4.5 || N2 < 0 || N2 > 4.5 || PPD < 0 || PPD > 1) {
            printf("Código de erro 3: Notas inválidas.\n");
            return 3;
        }

        printf("O estudante realizou o Exame Unificado (EU)? (1 para sim, 0 para não): ");
        scanf("%d", &flagEU);

        if (flagEU) {
            printf("Digite a nota do EU: ");
            scanf("%f", &EU);

            if (EU < 0 || EU > 1) {
                printf("Código de erro 3: Nota do EU inválida.\n");
                return 3;
            }
        }

        printf("O estudante realizou a N3? (1 para sim, 0 para não): ");
        scanf("%d", &flagN3);

        if (flagN3) {
            printf("Digite a nota da N3: ");
            scanf("%f", &N3);

            if (N3 < 0 || N3 > 4.5) {
                printf("Código de erro 3: Nota da N3 inválida.\n");
                return 3;
            }

            if (N1 <= N2 && N1 <= PPD)
                N1 = N3;
            else if (N2 <= N1 && N2 <= PPD)
                N2 = N3;
            else
                PPD = N3;
        }

        notaFinal = N1 + N2 + PPD;
        if (flagEU)
            notaFinal += EU;

        printf("Nota final: %.2f\n", notaFinal);


        if (notaFinal >= 6.0)
            printf("Aprovado!\n");
        else
            printf("Reprovado.\n");

        return 0;
    }

