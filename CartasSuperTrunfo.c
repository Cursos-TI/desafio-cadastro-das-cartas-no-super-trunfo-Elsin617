#include <stdio.h>

int main() {
    char estado_01, estado_02;
    char codigo_carta_01[20], codigo_carta_02[20];
    char cidade_01[50], cidade_02[50];
    int populacao_01, populacao_02;
    float area_01, area_02;
    float PIB_01, PIB_02;
    int num_pontos_tur_01, num_pontos_tur_02;

    printf("**** ENTRADA DE DADOS CARTA O1 ****\n");

    printf("Digite o estado 01:\n");
    scanf(" %c", &estado_01); 

    printf("Digite o codigo da carta 01:\n");
    scanf("%s", codigo_carta_01);

    printf("Digite a cidade 01:\n");
    scanf(" %[^\n]", cidade_01);  

    printf("Digite a populacao 01:\n");
    scanf("%d", &populacao_01);

    printf("Digite a area 01:\n");
    scanf("%f", &area_01);

    printf("Digite o PIB 01:\n");
    scanf("%f", &PIB_01);

    printf("Digite o numero de pontos turisticos 01:\n");
    scanf("%d", &num_pontos_tur_01);

    printf("**** ENTRADA DE DADOS CARTA O2 ****\n");

    printf("Digite o estado 02:\n");
    scanf(" %c", &estado_02); 

    printf("Digite o codigo da carta 02:\n");
    scanf("%s", codigo_carta_02);

    printf("Digite a cidade 02:\n");
    scanf(" %[^\n]", cidade_02); 

    printf("Digite a populacao 02:\n");
    scanf("%d", &populacao_02);

    printf("Digite a area 02:\n");
    scanf("%f", &area_02);

    printf("Digite o PIB 02:\n");
    scanf("%f", &PIB_02);

    printf("Digite o numero de pontos turisticos 02:\n");
    scanf("%d", &num_pontos_tur_02);

    printf("\n=== Dados informados ===\n");
    printf("**** Carta 01 ****\n");
    printf("Estado: %c\n", estado_01);
    printf("Código: %s\n", codigo_carta_01);
    printf("Cidade: %s\n", cidade_01);
    printf("Populacao: %d\n", populacao_01);
    printf("Área: %.3f km² \n", area_01);
    printf("PIB: %.2f bilhões de reais\n", PIB_01);
    printf("Número de pontos turísticos: %d\n", num_pontos_tur_01);

    printf("**** Carta 02 ****\n");
    printf("Estado: %c\n", estado_02);
    printf("Código: %s\n", codigo_carta_02);
    printf("Cidade: %s\n", cidade_02);
    printf("Populacao: %d\n", populacao_02);
    printf("Área: %.3f km² \n", area_02);
    printf("PIB: %.2f bilhões de reais\n", PIB_02);
    printf("Número de pontos turísticos: %d\n", num_pontos_tur_02);
    
}


