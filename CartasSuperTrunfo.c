#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Dados das cartas
    char estado_01, estado_02;
    char codigo_carta_01[20], codigo_carta_02[20];
    char cidade_01[50], cidade_02[50];
    int populacao_01, populacao_02;
    float area_01, area_02;
    float PIB_01, PIB_02;
    int num_pontos_tur_01, num_pontos_tur_02;
    float densidade_01, densidade_02;
    float pib_per_capita_01, pib_per_capita_02;

    // Atributos de batalha
    int ataque1, ataque2, defesa1, defesa2, recuo1, recuo2;
    int resultado1 = 0, resultado2 = 0;
    char primeiroAtributo, segundoAtributo;

    // Entrada de dados
    printf("**** ENTRADA DE DADOS CARTA 01 ****\n");
    printf("Digite o estado 01: ");
    scanf(" %c", &estado_01);

    printf("Digite o código da carta 01: ");
    scanf("%s", codigo_carta_01);

    printf("Digite a cidade 01: ");
    scanf(" %[^\n]", cidade_01);

    printf("Digite a população 01: ");
    scanf("%d", &populacao_01);

    printf("Digite a área 01: ");
    scanf("%f", &area_01);

    printf("Digite o PIB 01: ");
    scanf("%f", &PIB_01);

    printf("Digite o número de pontos turísticos 01: ");
    scanf("%d", &num_pontos_tur_01);

    densidade_01 = populacao_01 / area_01;
    pib_per_capita_01 = (populacao_01 > 0) ? (PIB_01 * 1000000000) / populacao_01 : 0;

    printf("\n**** ENTRADA DE DADOS CARTA 02 ****\n");
    printf("Digite o estado 02: ");
    scanf(" %c", &estado_02);

    printf("Digite o código da carta 02: ");
    scanf("%s", codigo_carta_02);

    printf("Digite a cidade 02: ");
    scanf(" %[^\n]", cidade_02);

    printf("Digite a população 02: ");
    scanf("%d", &populacao_02);

    printf("Digite a área 02: ");
    scanf("%f", &area_02);

    printf("Digite o PIB 02: ");
    scanf("%f", &PIB_02);

    printf("Digite o número de pontos turísticos 02: ");
    scanf("%d", &num_pontos_tur_02);

    densidade_02 = populacao_02 / area_02;
    pib_per_capita_02 = (populacao_02 > 0) ? (PIB_02 * 1000000000) / populacao_02 : 0;

    // Exibição
    printf("\n=== Dados informados ===\n");

    printf("\n**** Carta 01 ****\n");
    printf("Cidade: %s (%c)\n", cidade_01, estado_01);
    printf("Código: %s\n", codigo_carta_01);
    printf("População: %d\n", populacao_01);
    printf("Área: %.2f km²\n", area_01);
    printf("PIB: R$ %.2f bilhões\n", PIB_01);
    printf("Pontos turísticos: %d\n", num_pontos_tur_01);
    printf("Densidade: %.2f hab/km²\n", densidade_01);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita_01);

    printf("\n**** Carta 02 ****\n");
    printf("Cidade: %s (%c)\n", cidade_02, estado_02);
    printf("Código: %s\n", codigo_carta_02);
    printf("População: %d\n", populacao_02);
    printf("Área: %.2f km²\n", area_02);
    printf("PIB: R$ %.2f bilhões\n", PIB_02);
    printf("Pontos turísticos: %d\n", num_pontos_tur_02);
    printf("Densidade: %.2f hab/km²\n", densidade_02);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita_02);

    // Atributos de comparação
    // Aqui vamos usar: Ataque = PIB per capita, Defesa = densidade, Recuo = pontos turísticos

    ataque1 = pib_per_capita_01;
    ataque2 = pib_per_capita_02;

    defesa1 = densidade_01;
    defesa2 = densidade_02;

    recuo1 = num_pontos_tur_01;
    recuo2 = num_pontos_tur_02;

    printf("\n=== Início da Batalha ===\n");
    printf("Escolha o primeiro atributo:\n");
    printf("A. Ataque (PIB per capita)\n");
    printf("D. Defesa (Densidade demográfica)\n");
    printf("R. Recuo (Pontos turísticos)\n");

    printf("Escolha a comparação: ");
    scanf(" %c", &primeiroAtributo);

    switch (primeiroAtributo) {
        case 'A':
        case 'a':
            printf("Você escolheu Ataque!\n");
            resultado1 = ataque1 > ataque2 ? 1 : 0;
            break;
        case 'D':
        case 'd':
            printf("Você escolheu Defesa!\n");
            resultado1 = defesa1 > defesa2 ? 1 : 0;
            break;
        case 'R':
        case 'r':
            printf("Você escolheu Recuo!\n");
            resultado1 = recuo1 > recuo2 ? 1 : 0;
            break;
        default:
            printf("Opção inválida.\n");
            return 1;
    }

    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    printf("A. Ataque (PIB per capita)\n");
    printf("D. Defesa (Densidade demográfica)\n");
    printf("R. Recuo (Pontos turísticos)\n");

    printf("Escolha a comparação: ");
    scanf(" %c", &segundoAtributo);

    if (primeiroAtributo == segundoAtributo) {
        printf("Você escolheu o mesmo atributo duas vezes! Encerrando...\n");
        return 1;
    }

    switch (segundoAtributo) {
        case 'A':
        case 'a':
            printf("Você escolheu Ataque!\n");
            resultado2 = ataque1 > ataque2 ? 1 : 0;
            break;
        case 'D':
        case 'd':
            printf("Você escolheu Defesa!\n");
            resultado2 = defesa1 > defesa2 ? 1 : 0;
            break;
        case 'R':
        case 'r':
            printf("Você escolheu Recuo!\n");
            resultado2 = recuo1 > recuo2 ? 1 : 0;
            break;
        default:
            printf("Opção inválida.\n");
            return 1;
    }

    printf("\n=== Resultado da Batalha ===\n");
    if (resultado1 && resultado2) {
        printf("Parabéns! A carta 01 venceu nas duas comparações!\n");
    } else if (resultado1 || resultado2) {
        printf("Empate! Cada carta venceu em uma categoria.\n");
    } else {
        printf("A carta 02 venceu nas duas comparações. Tente novamente!\n");
    }

    return 0;
}