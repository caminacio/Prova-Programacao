#include <stdio.h>

int main() {
    int m, n;
    int m1, n1;
    int divisor = 2;
    int mmc = 1, mdc = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d" , &m);
    printf("Digite um numero inteiro positivo: ");
    scanf("%d" , &n);

    m1 = m;
    n1 = n;

    printf("\nEtapas do calculo do MMC:\n");

    while (m1 > 1 || n1 > 1) {
        if (m1 % divisor == 0 || n1 % divisor == 0) {
            printf("%-3d %-3d | %d\n", m1, n1, divisor);

            if (m1 % divisor == 0 && n1 % divisor == 0) {
                mdc *= divisor;
            }

            if (m1 % divisor == 0) m1 /= divisor;
            if (n1 % divisor == 0) n1 /= divisor;

            mmc *= divisor;
        } else {

           divisor++;
        }
    }

    printf("1   1\n");

    printf("\nMMC de %d e %d = %d\n", m, n, mmc);
    printf("MDC de %d e %d = %d\n", m, n, mdc);

    return 0;
}
