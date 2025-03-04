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
    scanf("%ld", &populacao1);
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
    scanf("%ld", &populacao2);
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

    densidadePop2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    if (populacao1 > populacao2) {
        printf("Populacao : A carta 1 venceu (%d)\n", populacao1 > populacao2);
    } else if (populacao1 < populacao2) {
        printf("Populacao : A carta 2 venceu (%d)\n", populacao1 < populacao2);
    } else {
        printf("Populacao : Empate (%d)\n", populacao1 == populacao2);
    }
    
    if(area1 > area2) {
        printf("Area : A carta 1 venceu (%d)\n", area1 > area2);
    } else if(area1 < area2) {
        printf("Area : A carta 2 venceu (%d)\n", area1 < area2);
    } else {
        printf("Area : Empate (%d)\n", area1 == area2);
    }

    if(pib1 > pib2) {
        printf("PIB : A carta 1 venceu (%d)\n", pib1 > pib2);
    } else if(pib1 < pib2) {
        printf("PIB : A carta 2 venceu (%d)\n", pib1 < pib2);
    } else {
        printf("PIB : Empate (%d)\n", pib1 == pib2);
    }

    if(numeroPontosTuristicos1 > numeroPontosTuristicos2) {
        printf("Numero de Pontos Turisticos : A carta 1 venceu (%d)\n", numeroPontosTuristicos1 > numeroPontosTuristicos2);
    } else if(numeroPontosTuristicos1 < numeroPontosTuristicos2) {
        printf("Numero de Pontos Turisticos : A carta 2 venceu (%d)\n", numeroPontosTuristicos1 < numeroPontosTuristicos2);
    } else {
        printf("Numero de Pontos Turisticos : Empate (%d)\n", numeroPontosTuristicos1 == numeroPontosTuristicos2);
    }

    if (densidadePop1 < densidadePop2) {
        printf("Densidade Populacional : A carta 1 venceu (%d)\n", densidadePop1 < densidadePop2);
    } else if (densidadePop1 > densidadePop2) {
        printf("Densidade Populacional : A carta 2 venceu (%d)\n", densidadePop1 > densidadePop2);
    } else {
        printf("Densidade Populacional : Empate (%d)\n", densidadePop1 == densidadePop2);
    }

    if (pibPerCapita1 > pibPerCapita2) {
        printf("PIB per Capita : A carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    } else if (pibPerCapita1 < pibPerCapita2) {
        printf("PIB per Capita : A carta 2 venceu (%d)\n", pibPerCapita1 < pibPerCapita2);
    } else {
        printf("PIB per Capita : Empate (%d)\n", pibPerCapita1 == pibPerCapita2);
    }

    superPoder1 = 
        (
            (populacao1 > populacao2) +
            (area1 > area2) +
            (pib1 > pib2) +
            (numeroPontosTuristicos1 > numeroPontosTuristicos2) +
            (densidadePop1 < densidadePop2) +
            (pibPerCapita1 > pibPerCapita2)
        ); 

    superPoder2 = 
        (
            (populacao2 > populacao1) +
            (area2 > area1) +
            (pib2 > pib1) +
            (numeroPontosTuristicos2 > numeroPontosTuristicos1) +
            (densidadePop2 < densidadePop1) +
            (pibPerCapita2 > pibPerCapita1)

        );

    if (superPoder1 > superPoder2) {
        printf("Super Poder : A carta 1 venceu (%d)\n", (int) (superPoder1 > superPoder2));
    } else if (superPoder1 < superPoder2) {
        printf("Super Poder : A carta 2 venceu (%d)\n", (int) (superPoder1 < superPoder2));
    } else {
        printf("Super Poder : Empate (%d)\n", (int) superPoder1 == (int) superPoder2);
    }
    printf("total de pontos Carta 1 = (%d)\n", (int) superPoder1);
    printf("total de pontos Carta 2 = (%d)\n", (int) superPoder2);



    printf("\n");

    return 0;
}