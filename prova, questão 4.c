#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero maior que 5: ");
    scanf("%d", &n);

    if (n <= 5) {
        printf("Numero invalido, deve ser maior que 5.\n");
        return 1;
    }

    int i, j;
    int meio = n / 2;

    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            if (j == 0 || j == i || i == meio) {
                printf("x");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
