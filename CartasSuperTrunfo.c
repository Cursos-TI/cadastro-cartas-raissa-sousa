//#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

// Estrutura para representar uma carta
/*struct Carta {
    char estado[50];
    char codigoCarta[50];
    char nomeCidade[50];
    unsigned long int populacao;
    float area;
    float PIB;
    int numPontosTuristicos;
    float densidadePop;
    float pibPerCapita;
    float superPoder1, superPoder2;
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
    scanf("%lu", &carta1.populacao);

    printf("Digite a área do território da cidade: \n");
    scanf("%f", &carta1.area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &carta1.PIB);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &carta1.numPontosTuristicos);

    carta1.densidadePop = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.PIB / carta1.populacao;

    carta1.superPoder1 = (float)carta1.populacao + carta1.area + carta1.PIB + (float)carta1.numPontosTuristicos + carta1.pibPerCapita + (1.0f / carta1.densidadePop);


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
    scanf("%lu", &carta2.populacao);

    printf("Digite a área do território da cidade: \n");
    scanf("%f", &carta2.area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &carta2.PIB);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &carta2.numPontosTuristicos); 
    
    carta2.densidadePop = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.PIB / carta2.populacao;

    carta2.superPoder2 = (float)carta2.populacao + carta2.area + carta2.PIB + (float)carta2.numPontosTuristicos + carta2.pibPerCapita + (1.0f / carta2.densidadePop);


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
    printf("Super Poder: %.2f\n", carta1.superPoder1);


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
    printf("Super Poder: %.2f\n", carta2.superPoder2);

  //Comparando as duas cartas
    int vPopulacao = (carta1.populacao > carta2.populacao) ? 1 : 0;
    int vArea = (carta1.area > carta2.area) ? 1 : 0;
    int vPIB = (carta1.PIB > carta2.PIB) ? 1 : 0;
    int vPontosTuristicos = (carta1.numPontosTuristicos > carta2.numPontosTuristicos) ? 1 : 0;
    int vPibPerCapita = (carta1.pibPerCapita > carta2.pibPerCapita) ? 1 : 0;
    int vDensidade = (carta1.densidadePop < carta2.densidadePop) ? 1 : 0;
    int vSuperPoder = (carta1.superPoder1 > carta2.superPoder2) ? 1 : 0;

  //Exibindo os resultados das comparações
    printf("\nComparação de Cartas:\n\n");
    printf("População: Carta %d venceu (%d)\n", vPopulacao ? 1 : 2, vPopulacao);
    printf("Área: Carta %d venceu (%d)\n", vArea ? 1 : 2, vArea);
    printf("PIB: Carta %d venceu (%d)\n", vPIB ? 1 : 2, vPIB);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", vPontosTuristicos ? 1 : 2, vPontosTuristicos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", vDensidade ? 1 : 2, vDensidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", vPibPerCapita ? 1 : 2, vPibPerCapita);
    printf("Super Poder: Carta %d venceu (%d)\n", vSuperPoder ? 1 : 2, vSuperPoder);


return 0;
} 
*/

//Desafio Super Trunfo - Países
// Tema 2 - Desenvolvendo a Lógica do Jogo
// Objetivo: Você implementará a lógica para comparar duas cartas e determinar a vencedora com base em um único atributo numérico.

#include <stdio.h>

struct Carta {
    char estado[50];
    char codigoCarta[50];
    char nomeCidade[50];
    unsigned long int populacao;
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
    scanf("%lu", &carta1.populacao);

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
    scanf("%lu", &carta2.populacao);

    printf("Digite a área do território da cidade: \n");
    scanf("%f", &carta2.area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &carta2.PIB);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &carta2.numPontosTuristicos); 
    
    carta2.densidadePop = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.PIB / carta2.populacao;


    //Área para exibição dos dados da cidade
    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Código: %s\n", carta1.codigoCarta);
    printf("Nome da cidade: %s\n", carta1.nomeCidade);
    printf("População: %lu\n", carta1.populacao);
    printf("Área: %.2f Km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.PIB);
    printf("Número de pontos turísticos: %d\n", carta1.numPontosTuristicos);
    printf("Densidade populacional: %.2f hab/km²\n", carta1.densidadePop);
    printf("PIB per capita: %.2f\n", carta1.pibPerCapita);


    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Código: %s\n", carta2.codigoCarta);
    printf("Cidade: %s\n", carta2.nomeCidade);
    printf("População: %lu\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.PIB);
    printf("Pontos turísticos: %d\n", carta2.numPontosTuristicos);
    printf("Densidade populacional: %.2f hab/km²\n", carta2.densidadePop);
    printf("PIB per capita: %.2f\n", carta2.pibPerCapita);

    //Comparar um atributo escolhido

    printf("\n=== COMPARAÇÃO (PIB per capita) ===\n");

    if (carta1.pibPerCapita > carta2.pibPerCapita) {
        printf("PIB per capita Carta 1: %.2f\n", carta1.pibPerCapita);
        printf("PIB per capita Carta 2: %.2f\n", carta2.pibPerCapita);
        printf("A Carta 1 venceu, pois tem maior PIB per capita!\n");
    } else {
        printf("PIB per capita Carta 1: %.2f\n", carta1.pibPerCapita);
        printf("PIB per capita Carta 2: %.2f\n", carta2.pibPerCapita);
        printf("A Carta 2 venceu, pois tem maior PIB per capita!\n");
    }
    
    return 0;
}    