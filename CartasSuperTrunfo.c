#include <stdio.h>

// Definição das variáveis das carta 01 e carta 02
int main(){
    char estado01, estado02; // Variáveis que armazena os dados das cartas de (A-H)
    char codigoCarta01[4], codigoCarta02[4]; // Variáveis que armazena o código da cidade, exemplo:(A01, B02)
    char nomeCidade01[30], nomeCidade02[30]; // Variáveis que amazena o nome da cidade das cartas 01 e carta 02
    int populacao01, populacao02; // Variáveis que amazena a população da cidade das cartas 01 e carta 02
    float area01, area02; // Variáveis que amazena a área em km² da cidade das cartas 01 e carta 02
    float pib01, pib02; // Variáveis que amazena o PIB em bilhões da cidade das cartas 01 e carta 02
    int numeroTuristicos01, numeroTuristicos02; // Variáveis que amazena o número de pontos turísticos da cidade das cartas 01 e carta 02

    // Coleta e armazena as irmformações sobre a carta01
    printf("\nCarta01\n");
    printf("Digite um caractere de A-H: ");
    scanf(" %c", &estado01);

    printf("Digite o Código da Cidade, exemplo(A01, B02): ");
    scanf("%s", &codigoCarta01);

    printf("Digite o nome da Cidade: ");
    scanf("%s", &nomeCidade01);

    printf("Digite a população da Cidade: ");
    scanf("%d", &populacao01);

    printf("Digite a Área da Cidade em km²: ");
    scanf("%f", &area01);

    printf("Digite o PIB da Cidade: ");
    scanf("%f", &pib01);

    printf("Digite pontos Turísticos tem a Cidade: ");
    scanf("%d", &numeroTuristicos01);

    // Coleta e armazena as irmformações sobre a carta02
    printf("\nCarta02\n");
    printf("Digite um caractere de A-H: ");
    scanf(" %c", &estado02);

    printf("Digite o Código da Cidade, exemplo(A01, B02): ");
    scanf("%s", &codigoCarta02);

    printf("Digite o nome da Cidade: ");
    scanf("%s", &nomeCidade02);

    printf("Digite a população da Cidade: ");
    scanf("%d", &populacao02);

    printf("Digite a Área da Cidade em km²: ");
    scanf("%f", &area02);

    printf("Digite o PIB da Cidade: ");
    scanf("%f", &pib02);

    printf("Digite pontos Turísticos tem a Cidade: ");
    scanf("%d", &numeroTuristicos02);

    // Imprime as informações da Carta01
    printf("\nCarta01\n");
    printf("Estado: %c\n", estado01);
    printf("Código: %s\n", codigoCarta01);
    printf("Nome da Cidade: %s\n", nomeCidade01);
    printf("Populção: %d\n", populacao01);
    printf("Área: %.2f km²\n", area01);
    printf("PIB: %.2f bilhões de reais\n", pib01);
    printf("Número de Pontos Turísticos: %d\n", numeroTuristicos01);

    // Imprime as informações da Carta02
    printf("\nCarta02\n");
    printf("Estado: %c\n", estado02);
    printf("Código: %s\n", codigoCarta02);
    printf("Nome da Cidade: %s\n", nomeCidade02);
    printf("Populção: %d\n", populacao02);
    printf("Área: %.2f km²\n", area02);
    printf("PIB: %.2f bilhões de reais\n", pib02);
    printf("Número de Pontos Turísticos: %d\n", numeroTuristicos02);

    return 0;
}