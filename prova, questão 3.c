#include <stdio.h>

int main() {
    char unidade;
    float temperatura, convertida;

    printf("Digite a unidade da temperatura (C para Celsius e F para Fahrenheit): ");
    scanf(" %c", &unidade);

    if (unidade == 'C' || unidade == 'c') {
        printf("Digite a temperatura em Celsius: ");
        scanf("%f", &temperatura);
        convertida = (9.0 / 5.0) * temperatura + 32;
        printf("Temperatura em Fahrenheit: %.2f°F\n", convertida);

    } else if (unidade == 'F' || unidade == 'f') {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%f", &temperatura);
        convertida = (5.0 / 9.0) * (temperatura - 32);
        printf("Temperatura em Celsius: %.2f°C\n", convertida);

    } else {
        printf("Unidade inválida. Use 'C' para Celsius ou 'F' para Fahrenheit.\n");
    }

    return 0;
}
