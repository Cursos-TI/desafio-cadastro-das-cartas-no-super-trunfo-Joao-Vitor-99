#include <stdio.h>

// Desafio Super Trunfo - Países - João Vitor Delgado de Souza
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
 // ====== Carta 1 ======
    char codigo1[4]; // Exemplo: A01 (3 caracteres + '\0')
    int populacao1;
    float area1, pib1;
    int pontos1;

    printf("Cadastro da primeira carta:\n");
    printf("Codigo da carta (ex: A01): ");
    scanf("%3s", codigo1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (km2): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // ====== Carta 2 ======
    char codigo2[4];
    int populacao2;
    float area2, pib2;
    int pontos2;

    printf("\nCadastro da segunda carta:\n");
    printf("Codigo da carta (ex: B02): ");
    scanf("%3s", codigo2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (km2): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // ====== Exibindo cartas ======
    printf("\n=== Carta 1 ===\n");
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bi\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);

    printf("\n=== Carta 2 ===\n");
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bi\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);


    return 0;
}
