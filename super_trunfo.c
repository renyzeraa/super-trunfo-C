#include <stdio.h>

int main()
{
  // Declaração das variáveis para os dados das cartas
  char estado1, estado2, codigo1[5], codigo2[5], cidade1[50], cidade2[50];
  int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
  float area1, area2, pib1, pib2;

  // Leitura dos dados da primeira carta
  printf("Informe os dados da Carta 1:\n");
  printf("Estado (uma letra de A a H): ");
  scanf(" %c", &estado1);
  printf("Código da Carta (ex: A01): ");
  scanf("%s", codigo1);
  printf("Nome da Cidade: ");
  scanf(" %49[^\n]", cidade1); // Lê uma string com espaços
  printf("População: ");
  scanf("%f", &populacao1);
  printf("Área (em km²): ");
  scanf("%f", &area1);
  printf("PIB (em bilhões de reais): ");
  scanf("%f", &pib1);
  printf("Número de Pontos Turísticos: ");
  scanf("%d", &pontosTuristicos1);

  // Leitura dos dados da segunda carta
  printf("\nInforme os dados da Carta 2:\n");
  printf("Estado (uma letra de A a H): ");
  scanf(" %c", &estado2);
  printf("Código da Carta (ex: A01): ");
  scanf("%s", codigo2);
  printf("Nome da Cidade: ");
  scanf(" %49[^\n]", cidade2);
  printf("População: ");
  scanf("%f", &populacao2);
  printf("Área (em km²): ");
  scanf("%f", &area2);
  printf("PIB (em bilhões de reais): ");
  scanf("%f", &pib2);
  printf("Número de Pontos Turísticos: ");
  scanf("%d", &pontosTuristicos2);

  // Cálculo da Densidade Populacional e PIB per Capita para a Carta 1
  float densidadePopulacional1 = populacao1 / area1;
  float pibPerCapita1 = pib1 * 1e9 / populacao1; // PIB em reais, pois foi dado em bilhões de reais

  // Cálculo da Densidade Populacional e PIB per Capita para a Carta 2
  float densidadePopulacional2 = populacao2 / area2;
  float pibPerCapita2 = pib2 * 1e9 / populacao2; // PIB em reais, pois foi dado em bilhões de reais

  // Exibição dos dados das cartas
  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

  printf("\n================================\n");

  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

  return 0;
}
