#include <stdio.h>
#include <string.h>

int main()
{
  // Definindo as variáveis para armazenar os dados das cartas
  char estado1[50], estado2[50];
  char codigo1[20], codigo2[20];
  char nomeCidade1[50], nomeCidade2[50];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontosTuristicos1, pontosTuristicos2;
  float densidadePopulacional1, densidadePopulacional2;
  float pibPerCapita1, pibPerCapita2;

  // Recebendo os dados para a primeira carta (Carta 1)
  printf("Digite os dados da primeira carta (Cidade 1):\n");
  printf("Estado: ");
  scanf(" %49[^\n]", estado1);
  printf("Nome da cidade: ");
  scanf(" %49[^\n]", nomeCidade1);
  printf("Código da carta: ");
  scanf("%s", codigo1);
  printf("População: ");
  scanf("%d", &populacao1);
  printf("Área (em km²): ");
  scanf("%f", &area1);
  printf("PIB: ");
  scanf("%f", &pib1);
  printf("Pontos turísticos: ");
  scanf("%d", &pontosTuristicos1);

  // Calculando a densidade populacional e o PIB per capita para a Carta 1
  densidadePopulacional1 = populacao1 / area1;
  pibPerCapita1 = pib1 / populacao1;

  // Recebendo os dados para a segunda carta (Carta 2)
  printf("\nDigite os dados da segunda carta (Cidade 2):\n");
  printf("Estado: ");
  scanf(" %49[^\n]", estado2);
  printf("Nome da cidade: ");
  scanf(" %49[^\n]", nomeCidade2);
  printf("Código da carta: ");
  scanf("%s", codigo2);
  printf("População: ");
  scanf("%d", &populacao2);
  printf("Área (em km²): ");
  scanf("%f", &area2);
  printf("PIB: ");
  scanf("%f", &pib2);
  printf("Pontos turísticos: ");
  scanf("%d", &pontosTuristicos2);

  // Calculando a densidade populacional e o PIB per capita para a Carta 2
  densidadePopulacional2 = populacao2 / area2;
  pibPerCapita2 = pib2 / populacao2;

  // Exibindo os dados das cartas
  printf("Carta 1 - %s (%s):\n", nomeCidade1, estado1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Pontos Turísticos: %d\n", pontosTuristicos1);
  printf("Densidade Populacional: %.2f\n", densidadePopulacional1);
  printf("PIB per Capita: %.2f\n\n", pibPerCapita1);

  printf("Carta 2 - %s (%s):\n", nomeCidade2, estado2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Pontos Turísticos: %d\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f\n", densidadePopulacional2);
  printf("PIB per Capita: %.2f\n\n", pibPerCapita2);

  // Comparação de cartas (baseado na população)
  printf("Comparação de cartas (Atributo: População):\n\n");
  printf("Carta 1 - %s (%s): %d\n", nomeCidade1, estado1, populacao1);
  printf("Carta 2 - %s (%s): %d\n\n", nomeCidade2, estado2, populacao2);

  if (populacao1 > populacao2)
  {
    printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
  }
  else if (populacao1 < populacao2)
  {
    printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
  }
  else
  {
    printf("Resultado: Empate! Ambas as cartas têm a mesma população.\n");
  }

  return 0;
}
