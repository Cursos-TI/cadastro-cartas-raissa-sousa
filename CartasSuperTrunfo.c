#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado;
    char codigoCarta[50];
    char nomeCidade[50];
    int populacao;
    float area;
    float PIB;
    int numPontosTuristicos;

  // Área para entrada de dados
    printf("Digite uma letra de 'A' a 'H'(Estado): \n");
    scanf("%s", &estado);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigoCarta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomeCidade);

    printf("Digite o número da população: \n");
    scanf("%d", &populacao);

    printf("Digite a área do território da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numPontosTuristicos);

  // Área para exibição dos dados da cidade

return 0;
} 
