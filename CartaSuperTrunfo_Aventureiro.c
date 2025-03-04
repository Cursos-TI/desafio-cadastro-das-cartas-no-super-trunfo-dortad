//Desafio Trunfo Nivel Aventureiro Aluno matricula 202502813139
// Aluno : Durval (Polo Santo Andre) V Entrega !
#include <stdio.h>

// criando as variaves 

    char estado[2]  = "";
    char codigoCarta[3] = "";
    char nomeCidade[51] = "";
    int populacao =0;
    float area =0;
    float pib =0;
    int numeroPontosTuristicos = 0;
    float densidadePop = 0;
    float pibPerCapita = 0;
    


int main() {
    //entrada de dados da primeira carta
    printf("Digite os dados da primeira Carta: \n");
    printf("Digite o estado: \n");
    scanf("%s", estado);
    printf("Digite o codigo da carta: \n");
    scanf("%s", codigoCarta);
    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade);
    printf("Digite a populacao: \n");
    scanf("%d", &populacao);
    printf("Digite a area: \n");
    scanf("%f", &area);
    printf("Digite o pib: \n");
    scanf("%f", &pib);
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &numeroPontosTuristicos);

    //mostrando os dados a primeira carta
    printf("\n");
    printf("Dados da Primeira Carta\n");
    printf("Estado: %s\n", estado);
    printf("Codigo da Carta: %s%s\n", estado, codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("Populacao: %d\n", populacao);	
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", numeroPontosTuristicos);
    densidadePop = populacao / area;
    pibPerCapita = pib / populacao;
    printf("Densidade Populacional: %.2f\n", densidadePop);
    printf("PIB per Capita: %.2f\n", pibPerCapita);
    printf("\n");

    //entrada de dados da segunda carta
    estado[0]  = "\0";
    codigoCarta[0] = "\0";
    nomeCidade[0] = "\0";
    populacao =0;
    area =0;
    pib =0;
    numeroPontosTuristicos = 0;
    densidadePop = 0;
    pibPerCapita = 0;

    printf("Digite os dados da segunda Carta: \n");
    printf("Digite o estado: \n");
    scanf("%s", estado);
    printf("Digite o codigo da carta: \n");
    scanf("%s", codigoCarta);
    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade);
    printf("Digite a populacao: \n");
    scanf("%d", &populacao);
    printf("Digite a area: \n");
    scanf("%f", &area);
    printf("Digite o pib: \n");
    scanf("%f", &pib);
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &numeroPontosTuristicos);
    printf("Digite a densidade populacional: \n");


    //mostrando os dados da segunda carta
    printf("\n");

    printf("Dados da Segunda Carta\n");
    printf("Estado: %s\n", estado);
    printf("Codigo da Carta: %s%s\n", estado, codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("Populacao: %d\n", populacao);	
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", numeroPontosTuristicos);
    densidadePop = populacao / area;
    pibPerCapita = pib / populacao;
    printf("Densidade Populacional: %.2f\n", densidadePop);
    printf("PIB per Capita: %.2f\n", pibPerCapita);
    printf("\n");
    
    printf("\n");

    return 0;
}