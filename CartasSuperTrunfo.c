#include <stdio.h>

// Definição das variáveis das carta 01 e carta 02
int main(){
    char estado01, estado02; // Variáveis que armazena os dados das cartas de (A-H)
    char codigoCarta01[4], codigoCarta02[4]; // Variáveis que armazena o código da cidade, exemplo:(A01, B02)
    char nomeCidade01[30], nomeCidade02[30]; // Variáveis que amazena o nome da cidade das cartas 01 e carta 02
    unsigned long int populacao01, populacao02; // Variáveis que amazena a população da cidade das cartas 01 e carta 02
    float area01, area02; // Variáveis que amazena a área em km² da cidade das cartas 01 e carta 02
    float pib01, pib02; // Variáveis que amazena o PIB em bilhões da cidade das cartas 01 e carta 02
    int numeroTuristicos01, numeroTuristicos02; // Variáveis que amazena o número de pontos turísticos da cidade das cartas 01 e carta 02
    float densidadepopulacional01, densidadepopulacional02; // Variáveis que amazena a densidade populacional da cidade das carta 01 e carta 02
    float pibpercapita01, pibpercapita02; // Variáveis que amazena o PIB per capita da cidade das carta 01 e carta 02
    float superpoder01, superpoder02; // Variáveis que amazena o superpoder das carta 01 e carta 02

    // Variáveis para comparação
    int resultadopopulacao = 0;
    int resultadoarea = 0;
    int resultadopib = 0;
    int resultadonumeroTuristicos = 0;
    int resultadodesidadepopulacional = 0;
    int resultadopibpercapita = 0;
    int resultadosuperpoder = 0;

    // Coleta e armazena as irmformações sobre a carta01
    printf("\nCarta01\n");
    printf("Digite um caractere de A-H: ");
    scanf(" %c", &estado01);

    printf("Digite o Código da Cidade, exemplo(A01, B02): ");
    scanf("%s", &codigoCarta01);

    printf("Digite o nome da Cidade: ");
    scanf("%s", &nomeCidade01);

    printf("Digite a população da Cidade: ");
    scanf("%ld", &populacao01);

    printf("Digite a Área da Cidade em km²: ");
    scanf("%f", &area01);

    printf("Digite o PIB da Cidade: ");
    scanf("%f", &pib01);

    printf("Digite pontos Turísticos tem a Cidade: ");
    scanf("%d", &numeroTuristicos01);

    // Calculo da densidade populacional e do pib per capita da carta01
    densidadepopulacional01 = populacao01 / area01;

    pibpercapita01 = pib01*1000000000 / (float)populacao01;

    // Calculo do super poder da carta01
    superpoder01 = populacao01 + area01 + pib01 + numeroTuristicos01 + pibpercapita01 + (1 / densidadepopulacional01);

    // Coleta e armazena as irmformações sobre a carta02
    printf("\nCarta02\n");
    printf("Digite um caractere de A-H: ");
    scanf(" %c", &estado02);

    printf("Digite o Código da Cidade, exemplo(A01, B02): ");
    scanf("%s", &codigoCarta02);

    printf("Digite o nome da Cidade: ");
    scanf("%s", &nomeCidade02);

    printf("Digite a população da Cidade: ");
    scanf("%ld", &populacao02);

    printf("Digite a Área da Cidade em km²: ");
    scanf("%f", &area02);

    printf("Digite o PIB da Cidade: ");
    scanf("%f", &pib02);

    printf("Digite pontos Turísticos tem a Cidade: ");
    scanf("%d", &numeroTuristicos02);

    // Calculo da densidade populacional e do pib per capita da carta02
    densidadepopulacional02 = populacao02 / area02;

    pibpercapita02 = pib02*1000000000 / (float)populacao02;

    // Calculo do super poder da carta02
    superpoder02 = populacao02 + area02 + pib02 + numeroTuristicos02 + pibpercapita02 + (1 / densidadepopulacional02);

    // Imprime as informações da Carta01
    printf("\nCarta01\n");
    printf("Estado: %c\n", estado01);
    printf("Código: %s\n", codigoCarta01);
    printf("Nome da Cidade: %s\n", nomeCidade01);
    printf("Populção: %ld\n", populacao01);
    printf("Área: %.2f km²\n", area01);
    printf("PIB: %.2f bilhões de reais\n", pib01);
    printf("Número de Pontos Turísticos: %d\n", numeroTuristicos01);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional01);
    printf("PIB per Capita: %.2f reais\n", pibpercapita01);
    printf("SUPERPODER: %.2f", superpoder01);

    // Imprime as informações da Carta02
    printf("\nCarta02\n");
    printf("Estado: %c\n", estado02);
    printf("Código: %s\n", codigoCarta02);
    printf("Nome da Cidade: %s\n", nomeCidade02);
    printf("Populção: %ld\n", populacao02);
    printf("Área: %.2f km²\n", area02);
    printf("PIB: %.2f bilhões de reais\n", pib02);
    printf("Número de Pontos Turísticos: %d\n", numeroTuristicos02);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional02);
    printf("PIB per Capita: %.2f reais\n", pibpercapita02);
    printf("SUPERPODER: %.2f", superpoder02);

    // Calculos para comparações das cartas
    resultadopopulacao = populacao01 > populacao02;
    resultadoarea = area01 > area02;
    resultadopib = pib01 > pib02;
    resultadonumeroTuristicos = numeroTuristicos01 > numeroTuristicos02;
    resultadodesidadepopulacional = densidadepopulacional01 < densidadepopulacional02;
    resultadopibpercapita = pibpercapita01 > pibpercapita02;
    resultadosuperpoder = superpoder01 > superpoder02;

    // Comparação de cartas
    printf("\n***DUELO DE CARTAS***\n");
    printf("\n***Lembrando 1 equivale a carta01 e 0 equivale a carta02***\n");
    printf("A maior população é da carta: %d\n", resultadopopulacao);
    printf("A maior área é da carta: %d\n", resultadoarea);
    printf("O maior PIB é da carta: %d\n", resultadopib);
    printf("A carta com maior número de pontos turísticos é a carta: %d\n", resultadonumeroTuristicos);
    printf("A menor densidade populacional pertence a carta: %d\n", resultadodesidadepopulacional);
    printf("O maior PIB per capita pertence a carta: %d\n", resultadopibpercapita);
    printf("O SUPERPODER que é a soma de todas as estatisticas da carta pertence a carta: %d\n", resultadosuperpoder);

    return 0;
}