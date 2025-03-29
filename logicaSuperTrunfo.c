#include <stdio.h>

// Desafio  Logica do Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main(){

    // iniciando o desafio do Super Trunfo
    // inserindo as váriaveis e atributos

    char estado1[3], estado2[3];
    char codigo_carta1[20], codigo_carta2[20];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;
    
    // Digitar os dados da Carta 1

    printf("Carta 1 \n");
    printf("Digite o estado: \n"); // Digitar o código do estado da Carta 1
    scanf(" %s", &estado1);

    printf("Digite o código da carta: \n"); // Digitar o código da Carta 1
    scanf("%s", &codigo_carta1);

    printf("Digite a cidade: \n"); // Digitar o nome da cidade Carta 1
    scanf("%s", &cidade1);

    printf("Digite a população: \n"); // Digitar a população da cidade da Carta 1
    scanf("%d", &populacao1);

    printf("Digite a área em Km²: \n"); // Digitar a area em Km² da cidade da Carta 1
    scanf("%f", &area1);

    printf("Digite o PIB: \n"); // Digitar o PIB da cidade da Carta 1
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turístico: \n"); // Digitar a quantidade de pontos turísticos da cidade da carta 1
    scanf("%d", &pontos_turisticos1);

    // fazer o calculo da densidade populacional e do PIB per capita

    densidade_populacional1 = populacao1 / area1;

    pib_per_capita1 = pib1 / populacao1;

    //Carta 1 Super Poder

    super_poder1 = (float) populacao1 + area1 + pib1 + pib_per_capita1 + (float) pontos_turisticos1;    

    // Agora vamos fazer a impressão dos dados da Carta 1
    
    printf("Carta 1 \n");
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", codigo_carta1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d hab\n", populacao1);
    printf("Área em Km²: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f\n", densidade_populacional1);
    printf("PIB per capita: %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    // Digitar os dados da Carta 2

    printf("Carta 2 \n");
    printf("Digite o estado: \n"); // Digitar o código do estado da Carta 2
    scanf(" %s", &estado2);

    printf("Digite o código da carta: \n"); // Digitar o código da Carta 2
    scanf("%s", &codigo_carta2);

    printf("Digite a cidade: \n"); // Digitar o nome da cidade Carta 2
    scanf("%s", &cidade2);

    printf("Digite a população: \n"); // Digitar a população da cidade da Carta 2
    scanf("%d", &populacao2);

    printf("Digite a área em Km²: \n"); // Digitar a area em Km² da cidade da Carta 2
    scanf("%f", &area2);

    printf("Digite o PIB: \n"); // Digitar o PIB da cidade da Carta 2
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turístico: \n"); // Digitar a quantidade de pontos turísticos da cidade da carta 2
    scanf("%d", &pontos_turisticos2);

   // fazer o calculo da densidade populacional e do PIB per capita

    densidade_populacional2 = populacao2 / area2;

    pib_per_capita2 = pib2 / populacao2;

    //Carta 2 Super Poder

    super_poder2 = (float) populacao2 + area2 + pib2 + pib_per_capita2 + (float) pontos_turisticos2; 

    // Agora vamos fazer a impressão dos dados da Carta 2
    
    printf("Carta 2 \n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo_carta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparação das cartas usando operadores relacionados usando IF - Else

    printf("\n*** Comparação das Cartas ***\n");

    printf("\nCarta 1 - %s ( %s ): População %d hab\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s ( %s ): População %d hab\n", cidade2, estado2, populacao2);
    
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 - %s ( %s ) venceu! \n", cidade1, estado1);
    }
    else { 
        printf("Resultado: Carta 2 - %s ( %s ) venceu! \n", cidade2, estado2);
    }

    printf("\nCarta 1 - %s ( %s ): Área %.2f km²\n", cidade1, estado1, area1);
    printf("Carta 2 - %s ( %s ): Área %.2f km²\n", cidade2, estado2, area2);
    
    if (area1 > area2) {
        printf("Resultado: Carta 1 - %s ( %s ) venceu! \n", cidade1, estado1);
    }
    else { 
        printf("Resultado: Carta 2 - %s ( %s ) venceu! \n", cidade2, estado2);
    }

    printf("\nCarta 1 - %s ( %s ): PIB %.2f reais \n", cidade1, estado1, pib1);
    printf("Carta 2 - %s ( %s ): PIB %.2f reais\n", cidade2, estado2, pib2);
    
    if (pib1 > pib2) {
        printf("Resultado: Carta 1 - %s ( %s ) venceu! \n", cidade1, estado1);
    }
    else { 
        printf("Resultado: Carta 2 - %s ( %s ) venceu! \n", cidade2, estado2);
    }

    printf("\nCarta 1 - %s ( %s ): %d pontos turísticos \n", cidade1, estado1, pontos_turisticos1);
    printf("Carta 2 - %s ( %s ): %d pontos turísticos \n", cidade2, estado2, pontos_turisticos2);
    
    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("Resultado: Carta 1 - %s ( %s ) venceu! \n", cidade1, estado1);
    }
    else { 
        printf("Resultado: Carta 2 - %s ( %s ) venceu! \n", cidade2, estado2);
    }

    printf("\nCarta 1 - %s ( %s ): Densidade %.2f hab/km² \n", cidade1, estado1, densidade_populacional1);
    printf("Carta 2 - %s ( %s ): Densidade %.2f hab/km² \n", cidade2, estado2, densidade_populacional2);
    
    if (densidade_populacional1 < densidade_populacional2) {
        printf("Resultado: Carta 1 - %s ( %s ) venceu! \n", cidade1, estado1);
    }
    else { 
        printf("Resultado: Carta 2 - %s ( %s ) venceu! \n", cidade2, estado2);
    }

    printf("\nCarta 1 - %s ( %s ): PIB per capita %.2f reais \n", cidade1, estado1, pib_per_capita1);
    printf("Carta 2 - %s ( %s ): PIB per capita %.2f reais \n", cidade2, estado2, pib_per_capita2);
    
    if (pib_per_capita1 > pib_per_capita2) {
        printf("Resultado: Carta 1 - %s ( %s ) venceu! \n", cidade1, estado1);
    }
    else { 
        printf("Resultado: Carta 2 - %s ( %s ) venceu! \n", cidade2, estado2);
    }

    printf("\nCarta 1 - %s ( %s ): Super Poder %.2f\n", cidade1, estado1, super_poder1);
    printf("Carta 2 - %s ( %s ): Super Poder %.2f\n", cidade2, estado2, super_poder2);
    
    if (super_poder1 > super_poder2) {
        printf("Resultado: Carta 1 - %s ( %s ) venceu! \n", cidade1, estado1);
    }
    else { 
        printf("Resultado: Carta 2 - %s ( %s ) venceu! \n", cidade2, estado2);
    }
       
    // finalizando o jogo Super Trunfo

    return 0;
}