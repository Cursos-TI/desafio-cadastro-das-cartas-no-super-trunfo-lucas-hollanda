#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Autor: Lucas Hollanda
// Data: 03/09/2025

struct Carta
{
    char estado;
    char codigo_carta[5];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional; // População / Área
    float pib_per_capita;         // PIB / População
};

float calcularDensidadePopulacional(int populacao, float area)
{
    if (area == 0)
    {
        return 0.0;
    }
    return (float)populacao / area;
}

float calcularPibPerCapita(float pib, int populacao)
{
    if (populacao == 0)
    {
        return 0.0;
    }
    return (pib * 1000000000.0) / (float)populacao;
}

int main()
{

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

    printf("Digite o PIB (em bilhoes de reais): \n");
    scanf("%f", &carta1.pib);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    carta1.densidade_populacional = calcularDensidadePopulacional(carta1.populacao, carta1.area);
    carta1.pib_per_capita = calcularPibPerCapita(carta1.pib, carta1.populacao);

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

    carta2.densidade_populacional = calcularDensidadePopulacional(carta2.populacao, carta2.area);
    carta2.pib_per_capita = calcularPibPerCapita(carta2.pib, carta2.populacao);

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
    printf("Densidade Populacional: %.2f hab/km2\n", carta1.densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", carta1.pib_per_capita);
    printf("\n");

    printf("--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo da Carta: %s\n", carta2.codigo_carta);
    printf("Nome da Cidade: %s\n", carta2.cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area (em km²): %.2f\n", carta2.area);
    printf("PIB (em bilhoes de reais): %.2f\n", carta2.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km2\n", carta2.densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", carta2.pib_per_capita);
    printf("\n");

    return 0;
}
