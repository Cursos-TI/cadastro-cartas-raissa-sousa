#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

// Estrutura para representar uma carta
struct Carta {
    char estado[50];
    char codigoCarta[50];
    char nomeCidade[50];
    int populacao;
    float area;
    float PIB;
    int numPontosTuristicos;
    float densidadePop;
    float pibPerCapita;
};

int main() {
  struct Carta carta1, carta2;

  // ====== ENTRADA DA PRIMEIRA CARTA ======

  // Área para entrada de dados

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Digite uma letra de 'A' a 'H'(Estado): \n");
    scanf("%s", carta1.estado);

    printf("Digite o código da carta: \n");
    scanf("%s", carta1.codigoCarta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", carta1.nomeCidade);

    printf("Digite o número da população: \n");
    scanf("%d", &carta1.populacao);

    printf("Digite a área do território da cidade: \n");
    scanf("%f", &carta1.area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &carta1.PIB);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &carta1.numPontosTuristicos);

    carta1.densidadePop = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.PIB / carta1.populacao;

    // ====== ENTRADA DA SEGUNDA CARTA ======

    // Área para entrada de dados

    printf("=== Cadastro da Carta 2 ===\n");

    printf("Digite uma letra de 'A' a 'H'(Estado): \n");
    scanf("%s", carta2.estado);

    printf("Digite o código da carta: \n");
    scanf("%s", carta2.codigoCarta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", carta2.nomeCidade);

    printf("Digite o número da população: \n");
    scanf("%d", &carta2.populacao);

    printf("Digite a área do território da cidade: \n");
    scanf("%f", &carta2.area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &carta2.PIB);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &carta2.numPontosTuristicos); 
    
    carta2.densidadePop = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.PIB / carta2.populacao;

  // Área para exibição dos dados da cidade
    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Código: %s\n", carta1.codigoCarta);
    printf("Nome da cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f Km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.PIB);
    printf("Número de pontos turísticos: %d\n", carta1.numPontosTuristicos);
    printf("Densidade populacional: %.2f hab/km²\n", carta1.densidadePop);
    printf("PIB per capita: %.2f\n", carta1.pibPerCapita);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Código: %s\n", carta2.codigoCarta);
    printf("Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.PIB);
    printf("Pontos turísticos: %d\n", carta2.numPontosTuristicos);
    printf("Densidade populacional: %.2f hab/km²\n", carta2.densidadePop);
    printf("PIB per capita: %.2f\n", carta2.pibPerCapita);

return 0;
} 
