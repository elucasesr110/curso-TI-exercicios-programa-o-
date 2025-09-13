#include <stdio.h>

int main(){
   
   //variaveis da carta A
    char estado1;
    char codigo1[5];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPercapita1;
    
    
    char estado2;
    char codigo2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPercapita2;
    
    //PEDINDO PRA ENTRAR COM OS DADOS DA PRIMEIRA CARTA:
    printf("\n*INFORME OS DADOS PARA CADASTRAR A CARTA A*\n");
    printf("informe uma letra de 'A até H' representando o estado: \n ");
    scanf("%c", &estado1);
    printf("informe o codigo da carta. EX: A01: \n");
    scanf(" %s", codigo1);
    printf("informe o nome da cidade: \n");
    scanf(" %s", nomeCidade1);
    printf("informe a populacao da carta A: \n");
    scanf("%d", &populacao1);
    printf("informe a area da cidade da carta A: \n");
    scanf("%f", &area1);
    printf("informe o pib: \n");
    scanf("%f", &pib1);
    printf("informe o numero de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos1);
        
    //calculo da densidade populacional e pib per capita carta A
    densidadePopulacional1 = populacao1 / area1;
    pibPercapita1 = pib1 / populacao1;

    //PEDINDO PRA ENTRAR COM OS DADOS DA SEGUNDA CARTA:
   
    printf("\n*INFORME OS DADOS PARA CADASTRAR A CARTA B*\n");   
    printf("informe uma letra de 'A até H' representando o estado: \n ");
    scanf(" %c", &estado2);
    printf("informe o codigo da carta. EX: A01: \n");
    scanf(" %s", codigo2);
    printf("informe o nome da cidade: \n");
    scanf(" %s", nomeCidade2);
    printf("informe a populacao da carta A: \n");
    scanf("%d", &populacao2);
    printf("informe a area da cidade da carta A: \n");
    scanf("%f", &area2);
    printf("informe o pib: \n");
    scanf("%f", &pib2);
    printf("informe o numero de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos2);
    
     //calculo da densidade populacional e pib per capita carta B
    densidadePopulacional2 = populacao2 / area2;
    pibPercapita2 = pib2 / populacao2;


    //imprimindo na telas os dados do primeir cadastro 
    printf("\n-----------------------------------------------------\n");
    printf("\nCARTA 1: \n");
    printf("ESTADO: %c\n", estado1);
    printf("CODIGO: %s\n", codigo1);
    printf("NOME DA CIDADE: %s\n", nomeCidade1);
    printf("POPULACAO: %d\n", populacao1);
    printf("AREA: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("NUMERO DE PONTOS TURISTICOS: %d\n", pontosTuristicos1);
    printf("DENSIDADE POPULACIONAL: %f\n", densidadePopulacional1);
    printf("PIB per Capita: %f\n", pibPercapita1);
    
    //imprimindo na tela os dados do segundo cadastro
    printf("\n-----------------------------------------------------\n");
    printf("\nCARTA 2: \n");
    printf("ESTADO: %c\n", estado2);
    printf("CODIGO: %s\n", codigo2);
    printf("NOME DA CIDADE: %s\n", nomeCidade2);
    printf("POPULACAO: %d\n", populacao2);
    printf("AREA: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("NUMERO DE PONTOS TURISTICOS: %d\n", pontosTuristicos2);
    printf("DENSIDADE POPULACIONAL: %f\n", densidadePopulacional2);
    printf("PIB per Capita: %f\n", pibPercapita2);
    
    
    
    return 0;
}
