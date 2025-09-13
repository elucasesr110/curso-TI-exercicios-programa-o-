#include <stdio.h>

int main() {
    
    // Variaveis da Carta 1
    char estado1;
    char codigo1[5];
    char nomeCidade1[50];
    unsigned long int populacao1; 
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    // Variaveis da Carta 2
    char estado2;
    char codigo2[5];
    char nomeCidade2[50];
    unsigned long int populacao2; 
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;
    
    // --- CADASTRO DA CARTA 1 ---
    printf("\n*INFORME OS DADOS PARA CADASTRAR A CARTA 1*\n");
    printf("Informe uma letra de 'A ate H' representando o estado: \n");
    scanf(" %c", &estado1);
    printf("Informe o codigo da carta. EX: A01: \n");
    scanf(" %s", codigo1);
    printf("Informe o nome da cidade: \n");
    scanf(" %[^\n]", nomeCidade1); // pedi ajuda da ia, serve pra poder digitar nomes com espaço
    printf("Informe a populacao da carta 1: \n");
    scanf("%lu", &populacao1); 
    printf("Informe a area da cidade da carta 1 (em km2): \n");
    scanf("%f", &area1);
    printf("Informe o PIB (em bilhoes de reais): \n");
    scanf("%f", &pib1);
    printf("Informe o numero de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos1);

    // --- CALCULOS PARA A CARTA 1 ---
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    // Cálculo do Super Poder
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidadePopulacional1);

    // --- CADASTRO DA CARTA 2 ---
    printf("\n*INFORME OS DADOS PARA CADASTRAR A CARTA 2*\n");
    printf("Informe uma letra de 'A ate H' representando o estado: \n");
    scanf(" %c", &estado2);
    printf("Informe o codigo da carta. EX: A01: \n");
    scanf(" %s", codigo2);
    printf("Informe o nome da cidade: \n");
    scanf(" %[^\n]", nomeCidade2); // pedi ajuda pra ia pra poder colocar nome com espaço
    printf("Informe a populacao da carta 2: \n");
    scanf("%lu", &populacao2); 
    printf("Informe a area da cidade da carta 2 (em km2): \n");
    scanf("%f", &area2);
    printf("Informe o PIB (em bilhoes de reais): \n");
    scanf("%f", &pib2);
    printf("Informe o numero de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos2);
    
    // --- CALCULOS PARA A CARTA 2 ---
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    // Cálculo do Super Poder
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidadePopulacional2);

    // --- MOSTRANDO E COMPARANDO OS RESULTADOS  ---
    printf("\n-----------------------------------------------------\n");
    printf("\nComparacao de Cartas:\n");

    // COMPARAR Populacao
    printf("Populacao: ");
    if (populacao1 > populacao2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // COMPARAR A ÁREA 
    printf("Area: ");
    if (area1 > area2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // COMAPRAÇÃO DO PIB
    printf("PIB: ");
    if (pib1 > pib2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // COMPARAÇÃO DOS PONTOS TURIRSTICOS
    printf("Pontos Turisticos: ");
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }
    
    // Densidade Populacional 
    printf("Densidade Populacional: ");
    if (densidadePopulacional1 < densidadePopulacional2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // COMPARAÇÃO PIB PER CAPITA
    printf("PIB per Capita: ");
    if (pibPerCapita1 > pibPerCapita2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }
    
    // SUPER PODER 
    printf("Super Poder: ");
    if (superPoder1 > superPoder2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    return 0;
}
