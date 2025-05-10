#include <stdio.h>

int main() {
    int ano_que_nasceu, idade_em_2025, f50_anos;

    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &ano_que_nasceu);

    idade_em_2025 = 2025 - ano_que_nasceu;
    f50_anos = ano_que_nasceu + 50;

    printf("Voce tera %d anos no final de 2025.\n", idade_em_2025);

    if (idade_em_2025 >= 50) {
        printf("Voce fez 50 anos no ano de %d.\n", f50_anos);
    } else {
        printf("Voce fara 50 anos no ano de %d.\n", f50_anos);
    }

    return 0;
}
