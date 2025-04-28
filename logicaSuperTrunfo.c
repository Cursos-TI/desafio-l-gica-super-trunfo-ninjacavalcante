#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char codigo_da_cidade[4], codigo_da_cidade2[4];
    char nome[20], nome2[20];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontos_turisticos, pontos_turisticos2;
    float densidade, densidade2;
    float pib_per, pib_per2;

     // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    
    printf("Digite o código da primeira carta: \n");
        scanf("%3s", &codigo_da_cidade);
    printf("Digite o nome da cidade: \n");
        scanf("%s", &nome);
    printf("Digite a populacão: \n");
        scanf("%d", &populacao);
    printf("Digite a área: \n");
        scanf("%f", &area);
    printf("Digite o PIB: \n");
        scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: \n");
        scanf("%d", &pontos_turisticos);

    printf("Digite o código da segunda carta: \n");
        scanf("%3s", &codigo_da_cidade2);
    printf("Digite o nome da cidade: \n");
        scanf("%s", &nome2);
    printf("Digite a populacão: \n");
        scanf("%d", &populacao2);
    printf("Digite a área: \n");
        scanf("%f", &area2);
    printf("Digite o PIB: \n");
        scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: \n");
        scanf("%d", &pontos_turisticos2);

    densidade = populacao/area;
    densidade2 = populacao2/area2;

    pib_per = pib/populacao;
    pib_per2 = pib2/populacao2;

    printf("\n=== Dados da Primeira Carta ===\n");
    printf("\n Código da carta: %s\n", codigo_da_cidade);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %d mil\n", populacao);
    printf("Área: %.2f km2\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km2\n", densidade);
    printf("PIB per Capita: %.2f reais\n", pib_per);

    printf("\n=== Dados da Segunda Carta ===\n");
    printf("\n Código da carta: %s\n", codigo_da_cidade2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %d mil\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per2);
         
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    printf("\nComparando POPULAÇÃO:\n");
    if (populacao > populacao2) {
        printf("A cidade vencedora é: %s (maior população)\n", nome);
    } else if (populacao2 > populacao) {
        printf("A cidade vencedora é: %s (maior população)\n", nome2);
    } else {
        printf("Empate: ambas as cidades possuem a mesma população.\n");
    }
    printf("\nComparando AREA:\n");
    if (area > area2) {
        printf("A cidade vencedora é: %s (maior área)\n", nome);
    } else if (area2 > area) {
        printf("A cidade vencedora é: %s (maior área)\n", nome2);
    } else {
        printf("Empate: ambas as cidades possuem a mesma área.\n");
    }
    printf("\nComparando PIB per capita:\n");
    if (pib_per > pib_per2) {
        printf("A cidade vencedora é: %s (maior PIB per capita)\n", nome);
    } else if (pib_per2 > pib_per) {
        printf("A cidade vencedora é: %s (maior PIB per capita)\n", nome2);
    } else {
        printf("Empate: ambas as cidades possuem o mesmo PIB.\n");
    }
    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
