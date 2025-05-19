#include <stdio.h>

int main() {
    // Carta 1
    char estado1, codigo1[4], nome1[50];
    int populacao1, pontosTur1;
    float area1, pib1;

    // Carta 2
    char estado2, codigo2[4], nome2[50];
    int populacao2, pontosTur2;
    float area2, pib2;

    // Leitura Carta 1
    printf("Carta 1:\nEstado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código (ex: A01): ");
    scanf(" %3s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %49[^\n]", nome1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTur1);

    // Leitura Carta 2
    printf("\nCarta 2:\nEstado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código (ex: B02): ");
    scanf(" %3s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %49[^\n]", nome2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTur2);

    // Exibição
    printf("\n-- Dados Cadastrados --\n");
    printf("\nCarta 1:\nEstado: %c\nCódigo: %s\nNome: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos Turísticos: %d",
           estado1, codigo1, nome1, populacao1, area1, pib1, pontosTur1);
    printf("\n\nCarta 2:\nEstado: %c\nCódigo: %s\nNome: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos Turísticos: %d",
           estado2, codigo2, nome2, populacao2, area2, pib2, pontosTur2);

    return 0;
}