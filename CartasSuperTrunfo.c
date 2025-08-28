#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

struct Carta
{
    char estado;
    char codigo_carta[5];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    /* data */
};

int main()
{
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    struct Carta carta1, carta2;

    // Cadastro Carta 1:
    printf("--- Cadastro da Carta 1 ---\n");

    printf("Digite o Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", carta1.codigo_carta);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", carta1.cidade);

    printf("Digite a Populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a Area (em km²): \n");
    scanf("%f", &carta1.area);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &carta1.pib);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    printf("\n");

    // Cadastro Carta 2:
    printf("--- Cadastro da Carta 2 ---\n");


    printf("Digite o Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Digite o Codigo da Carta (ex: A01): \n");
    scanf("%s", carta2.codigo_carta);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", carta2.cidade);

    printf("Digite a Populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a Area (em km²): ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &carta2.pib);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &carta2.pontos_turisticos);
    printf("\n");



    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("--- Dados da Carta 1 ---\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo da Carta: %s\n", carta1.codigo_carta);
    printf("Nome da Cidade: %s\n", carta1.cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area (em km²): %.2f\n", carta1.area);
    printf("PIB (em bilhoes de reais): %.2f\n", carta1.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1.pontos_turisticos);
    printf("\n");           

    printf("--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo da Carta: %s\n", carta2.codigo_carta);                   
    printf("Nome da Cidade: %s\n", carta2.cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area (em km²): %.2f\n", carta2.area);
    printf("PIB (em bilhoes de reais): %.2f\n", carta2.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2.pontos_turisticos);
    printf("\n");

    return 0;
}
