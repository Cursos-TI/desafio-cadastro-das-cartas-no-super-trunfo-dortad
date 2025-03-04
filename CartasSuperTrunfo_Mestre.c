//Desafio Trunfo Nivel Mestre Aluno matricula 202502813139
// Aluno : Durval (Polo Santo Andre)
#include <stdio.h>

// criando as variaves 

    char estado1[2]  = "";
    char codigoCarta1[3] = "";
    char nomeCidade1[51] = "";
    unsigned long int populacao1 =0;
    float area1 =0;
    float pib1 =0;
    int numeroPontosTuristicos1 = 0;
    float densidadePop1 = 0;
    float pibPerCapita1 = 0;
    float superPoder1 = 0;

    char estado2[2]  = "";
    char codigoCarta2[3] = "";
    char nomeCidade2[51] = "";
    unsigned long int populacao2 =0;
    float area2 =0;
    float pib2 =0;
    int numeroPontosTuristicos2 = 0;
    float densidadePop2 = 0;
    float pibPerCapita2 = 0;
    float superPoder2 = 0;
    
    //printf("Quociente: %.2f\n", quociente);

int main() {
    //entrada de dados da primeira carta
    printf("Digite os dados da primeira Carta: \n");
    printf("Digite o estado: \n");
    scanf("%s", estado1);
    printf("Digite o codigo da carta: \n");
    scanf("%s", codigoCarta1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade1);
    printf("Digite a populacao: \n");
    scanf("%d", &populacao1);
    printf("Digite a area: \n");
    scanf("%f", &area1);
    printf("Digite o pib: \n");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &numeroPontosTuristicos1);

    //mostrando os dados a primeira carta
    /*printf("\n");
    printf("Dados da Primeira Carta\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo da Carta: %s%s\n", estado1, codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);	
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", numeroPontosTuristicos1);

    printf("Densidade Populacional: %.2f\n", densidadePop1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    printf("\n");
    */
    //entrada de dados da segunda carta


    printf("Digite os dados da segunda Carta: \n");
    printf("Digite o estado: \n");
    scanf("%s", estado2);
    printf("Digite o codigo da carta: \n");
    scanf("%s", codigoCarta2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade2);
    printf("Digite a populacao: \n");
    scanf("%d", &populacao2);
    printf("Digite a area: \n");
    scanf("%f", &area2);
    printf("Digite o pib: \n");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &numeroPontosTuristicos2);
    printf("Digite a densidade populacional: \n");


    //mostrando os dados da segunda carta
    printf("\n");

    /*printf("Dados da Segunda Carta\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da Carta: %s%s\n", estado2, codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);	
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", numeroPontosTuristicos2);

    printf("Densidade Populacional: %.2f\n", densidadePop2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf("\n");
    */

    densidadePop1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + numeroPontosTuristicos1 + pibPerCapita1 + !densidadePop1;

    densidadePop2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    printf("\n");

    return 0;
}